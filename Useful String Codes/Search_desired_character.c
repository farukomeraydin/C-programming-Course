#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	char str[SIZE];
	printf("Enter a string: ");
	sgets(str);
	printf("Enter the character that will be searched: ");
	int ch = getchar();
	char *p = strchr(str, ch);
	if (p != NULL)
		printf("Successfully found! In (%s) string, the character index: %d\n", str, (int)(p - str));
	else
		printf("Couldn't found.\n");
}
