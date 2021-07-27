#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031 6054) //Warnings for stricmp and scanf disabled
#include "Omer.h"


int main()
{
	char s1[100];
	char s2[100];

	printf("Enter 2 words: ");
	scanf("%s%s", s1, s2);

	if (!_stricmp(s1, s2))
		printf("Equal\n");
	else
		printf("Not equal\n");
}
