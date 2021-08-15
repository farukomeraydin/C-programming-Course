#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include "Omer.h"

#define SIZE	100

int main()
{
	char s1[SIZE];
	char s2[SIZE];
	
	printf("Enter 2 names: ");
	scanf("%s%s", s1, s2);
	if (!strncmp(s1 + 2, s2 + 2, 3))
		printf("Equal\n");
	else
		printf("Not equal\n");
}
