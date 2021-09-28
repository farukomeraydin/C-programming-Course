#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable: 6031)
#include "Omer.h"


int main(int argc, char* argv[])
{
	char source_file_name[80];
	char dest_file_name[80];

	if (argc != 3) {
		printf("Source file name: ");
		scanf("%s", source_file_name);
		printf("Destination file name: ");
		scanf("%s", dest_file_name);
	}
	else {
		strcpy(source_file_name, argv[1]);
		strcpy(dest_file_name, argv[2]);
	}
	///....
	printf("%s named file copied as %s\n", argv[1], argv[2]);
}
