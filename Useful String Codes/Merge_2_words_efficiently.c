#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"


#define SIZE 100

int main()
{
	char s1[SIZE];
	char s2[SIZE];

	printf("Enter 2 names: ");
	scanf("%s%s", s1, s2);

	int i;
	for (i = 0; s1[i] != '\0'; ++i)
		;

	for (int j = 0; s2[j] != '\0'; ++j, ++i)
		s1[i] = s2[j];

	s1[i] = '\0';
	printf("(%s)\n", s1);
}
