#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#define SIZE	80

int main()
{
	char str[SIZE];
	printf("Password: ");
	fgets(str, SIZE, stdin);
	char* p = strchr(str, '\n');
	if (p) 
		*p = '\0';

	if (!strcmp(str, "bruh"))
		printf("Correct password\n");
	else
		printf("Incorrect password\n");
	
}
