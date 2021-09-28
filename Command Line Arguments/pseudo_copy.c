#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"



int main(int argc, char* argv[])
{
	if (argc != 3) {
		fprintf(stderr, "usage: <copyf> <source file name> <dest file name>\n");
		return 1;
	}
	printf("%s named file was copied as %s\n", argv[1], argv[2]);
}
