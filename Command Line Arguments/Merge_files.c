#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#define MAX_FILE_NAME_LEN	80

//usage: dbir test.exe

int main(int argc, char **argv)
{
	char source_file_name[MAX_FILE_NAME_LEN + 1];
	char dest_file_name[MAX_FILE_NAME_LEN + 1];
	FILE* fs, * fd;
	int byte_count = 0;
	int file_count = 0;
	int c;

	if (argc != 2) {
		printf("Target file name: ");
		scanf("%s", dest_file_name);
	}
	else {
		strcpy(dest_file_name, argv[1]);
	}

	if ((fd = fopen(dest_file_name, "wb")) == NULL) {
		fprintf(stderr, "%s file cannot created\n", dest_file_name);
		return 1;
	}
	
	while (1) {
		sprintf(source_file_name, "dparca%03d.par", file_count + 1);
		if ((fs = fopen(source_file_name, "rb")) == NULL)
			break;
		while ((c = fgetc(fs)) != EOF) {
			fputc(c, fd);
			++byte_count;
		}
		fclose(fs);
		if (remove(source_file_name)) {
			printf("%s file cannot be deleted\n", source_file_name);
			return 2;
		}
		++file_count;
	}
	fclose(fd);
	printf("There are %d files, every chunk has %d bytes merged into %s file\n", file_count, byte_count, dest_file_name);
}
