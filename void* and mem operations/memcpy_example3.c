#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#define SIZE	20

int main()
{
	char s1[SIZE];
	char s2[SIZE];

	printf("Enter a string: ");
	sgets(s1);

	memcpy(s2, s1, strlen(s1) + 1);
	printf("(%s)\n", s1);
	printf("(%s)\n", s2);
}
