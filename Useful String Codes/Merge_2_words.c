#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"


#define SIZE 100

int main()
{
	char s1[SIZE];
	char s2[SIZE];
	char s3[SIZE];

	printf("Enter 2 names: ");
	scanf("%s%s", s1, s2);

	int i, j;
	for (i = 0; s1[i] != '\0'; ++i)
		s3[i] = s1[i];

	for (j = 0; s2[j] != '\0'; ++j)
		s3[i++] = s2[j];

	s3[i] = '\0';
	printf("(%s) + (%s) = (%s)\n", s1, s2, s3);
}
