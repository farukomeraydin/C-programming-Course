#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	100

int main()
{
	char s1[SIZE] = "ATAKAN";
	char s2[SIZE] = "mehmet";
	size_t n;

	printf("How many characters do you want to add? : ");
	scanf_s("%zu", &n);

	strncat(s2, s1, n);

	printf("(%s)\n", s2);
}
