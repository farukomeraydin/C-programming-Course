#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	double a[10] = { 0 };
	double *p = a;
	char str[] = "Yesterday was the day of florists";
	char *cp = str;

	printf("%zu\n", sizeof a); //80
	printf("%zu\n", sizeof *a); //8
	printf("%zu\n", sizeof p); //8
	printf("%zu\n", sizeof *p); //8

	printf("%zu\n", sizeof str); //34
	printf("%zu\n", sizeof *str); //1
	printf("%zu\n", sizeof cp); //8
	printf("%zu\n", sizeof *cp); //1

}
