#define _CRT_SECURE_NO_WARNINGS
#pragma	warning(disable: 6031 6054)
#include "Omer.h"

#define	SIZE	20

int main()
{
	char str[SIZE];

	printf("Enter a string: ");
	scanf("%s", str);
	printf("[%s]\n", str);
	char *p;

	double dval = strtod(str, &p);

	printf("dval = %f\n", dval);
	printf("index = %d\n", (int)(p - str));
	printf("(%c)\n", *p);
}
