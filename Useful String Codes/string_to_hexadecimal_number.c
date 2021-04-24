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
		if (isdigit(str[i]))
			ival = ival * 16 + str[i] - '0';
		else if (isxdigit(str[i]))
			ival = ival * 16 + toupper(str[i]) - 'A' + 10;

	printf("ival = %d\n", ival);
}
