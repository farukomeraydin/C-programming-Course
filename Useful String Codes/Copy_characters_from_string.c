#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	20

int main()
{
	char s1[SIZE] = "ATAKAN";
	char s2[SIZE];
	size_t n;

	printf("How many characters would you like to copy: ");
	scanf("%zu", &n);
	strncpy(s2, s1, n);
	strncpy(s2, s1, n)[n] = '\0';
	printf("%s\n", s2);
}
