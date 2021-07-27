#define _CRT_SECURE_NO_WARNINGS
#pragma	warning(disable:6054 6031) //Disabling warnings for scanf and str functions
#include "Omer.h"

#define SIZE	20

int main()
{
	char s1[SIZE];
	char s2[SIZE];
	char s3[SIZE];

	printf("Enter 2 names: ");
	scanf("%s%s", s1, s2);

	strcpy(s3, s1);
	strcat(s3, s2);

	printf("(%s) + (%s) = (%s)\n", s1, s2, s3);
}
