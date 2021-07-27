#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031) //Warning disable for scanf
#include "Omer.h"

#define	SIZE	50

int main()
{
	char old_file_name[SIZE];
	char new_file_name[SIZE];

	printf("File name: ");
	scanf("%s", old_file_name);
	old_file_name[strlen(old_file_name)] = '\0'; // In order to avoid warning for strcpy below
	strcpy(new_file_name, old_file_name);
	//If a file doesn't have extension make it .txt [1]
	//If a file's extension is .jpg, make it .gif [2]
	//If a file's extension is .dat, delete its extension [3]
	//If a file's extension is different from above, make it .xls [4]

	char* ptr = strrchr(new_file_name, '.');
	if (!ptr)
		strcat(new_file_name, ".txt");
	else if (!strcmp(ptr, ".jpg"))
		strcpy(ptr, ".gif");
	else if (!strcmp(ptr, ".dat"))
		*ptr = '\0';
	else
		strcpy(ptr, ".xls");

	printf("(%s)  (%s)\n", old_file_name, new_file_name);
}
