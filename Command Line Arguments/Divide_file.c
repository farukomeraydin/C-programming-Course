#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#define	MAX_FILE_NAME_LEN	80

int main(int argc, char **argv)
{
	char source_file_name[MAX_FILE_NAME_LEN + 1];
	char dest_file_name[MAX_FILE_NAME_LEN + 1];
	int chunk;
	FILE* fs, * fd;
	int byte_count = 0;
	int file_count = 0;
	int c;

	if (argc != 3) {
		printf("Source file name: ");
		scanf("%s", source_file_name);
		printf("Bytes for each chunk: ");
		scanf_s("%d", &chunk);
	}
	else {
		strcpy(source_file_name, argv[1]);
		chunk = atoi(argv[2]);
	}

	if ((fs = fopen(source_file_name, "rb")) == NULL) {
		fprintf(stderr, "%s named file cannot open\n", source_file_name);
		return 1;
	}

	fd = NULL;

	while ((c = fgetc(fs)) != EOF) {
		if (fd == NULL) { //create .par file
			sprintf(dest_file_name, "dparca%03d.par", file_count + 1);
			if ((fd = fopen(dest_file_name, "wb")) == NULL) {
				fprintf(stderr, "file cannot open\n");
				fclose(fs);
				return 2;
			}
			++file_count;
		}
		fputc(c, fd);
		++byte_count;
		if (byte_count % chunk == 0) { //Chunk byte is written to file then file will be closed
			fclose(fd);
			fd = NULL;
		}
	}

	fclose(fs);
	if (fd)
		fclose(fd);
	printf("Total of %d bytes of %s file is divided to %d chunks, %d bytes for each\n", byte_count, source_file_name, file_count, chunk);
}
