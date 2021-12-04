#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	100

int main()
{
	char str[SIZE];

	printf("Enter a string: ");
	sgets(str);
	printf("(%s)\n", str);
	char* p = strpbrk(str, "0123456789");
	if (p == NULL)
		printf("In (%s) string there is no character from (%s)\n", str, "0123456789");
	else
		printf("Found... idx=(%d), string=(%s)\n", p - str, p);
}
