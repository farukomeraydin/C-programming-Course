#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable: 6031)
#include "Omer.h"

#define SIZE	20

int main()
{
	char s1[SIZE];
	char s2[SIZE];

	printf("Enter 2 names: ");
	scanf("%s%s", s1, s2);
	str_prepend(s1, s2);
	printf("(%s)\n", s1);
}
