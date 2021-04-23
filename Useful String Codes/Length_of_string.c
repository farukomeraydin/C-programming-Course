#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"


#define SIZE 100

int main()
{
	char str[SIZE];
	printf("Enter a string: ");
	sgets(str);
	
	int len;
	for (len = 0; str[len] != '\0'; ++len)
		;
	printf("Length of the string = %d\n", len);
}
