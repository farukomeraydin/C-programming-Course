#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main(int argc, char **argv)
{
	if (argc != 3) {
		fprintf(stderr, "usage <filecopy> <source file name> <dest file name>\n");
		return 1;
	}
	FILE* fs = fopen(argv[1], "rb");
	if (!fs) {
		fprintf(stderr, "cannot open file %s to read\n", argv[1]);
		return 2;
	}
	FILE* fd = fopen(argv[2], "wb");
	if (!fd) {
		fprintf(stderr, "cannot create file %s to write\n", argv[2]);
		return 3;
	}
	
	int byte_count = 0;
	int c;

	while ((c = fgetc(fs)) != EOF) {
		fputc(c, fd);
		++byte_count;
	}

	fclose(fs);
	fclose(fd);
	printf("%d byte %s file copied to %s\n", byte_count, argv[1], argv[2]);

}
