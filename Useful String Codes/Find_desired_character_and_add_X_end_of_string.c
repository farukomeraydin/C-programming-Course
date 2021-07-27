#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	char str[SIZE];

	printf("Enter a string: ");
	sgets(str);

	printf("Enter the searched character: ");
	int ch = getchar();

	char *p = strchr(str, ch);
	if (p != NULL)
		printf("Character found..its index is %d in (%s)\n", (int)(p-str), str);
	else
		printf("Character not found\n");

	p = strchr(str, '\0');
	*p++ = 'X';
	*p = '\0';
	puts(str); //We added character 'X' at end of the string
}
