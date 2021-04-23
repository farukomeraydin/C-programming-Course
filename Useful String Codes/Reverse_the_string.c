#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"


#define SIZE 100

int main()
{
	char str[SIZE];
	printf("Enter a string: ");
	sgets(str);
	
	int i;
	for (i = 0; str[i] != '\0'; ++i)
		;

	for (--i; i >= 0; --i)
		putchar(str[i]);
	printf("\n");
}
