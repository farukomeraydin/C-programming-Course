#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	100

int main()
{
	char s1[SIZE];
	char s2[SIZE];

	printf("Enter the first string: ");
	sgets(s1);
	printf("Enter the second string: ");
	sgets(s2);

	printf("(%s) (%s)\n", s1, s2);

	if (is_at_end(s1, s2))
		printf("Yes there is\n");
	else
		printf("No there is not");
}
