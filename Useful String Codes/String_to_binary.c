#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"


#define SIZE 100

int main()
{
	char str[SIZE];

	printf("Enter a string: ");
	scanf("%s", str);
	printf("[%s]\n", str);
	int ival = 0;
	
	for (int i = 0; str[i] != '\0'; ++i)
		ival = ival * 2 + str[i] - '0';

	printf("ival = %d\n", ival);
}
