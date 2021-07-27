#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	char str[1000];
	char s[] = "0123456789";
	printf("Enter a string: ");
	sgets(str);
	char *p = strpbrk1(str, s);
	if (!p)
		printf("Couldn't found\n");
	else {
		printf("FOUND, idx=%d (%s)\n", (int)(p - str), p);
		*p = '*'; 
		puts(str);
	}
}
