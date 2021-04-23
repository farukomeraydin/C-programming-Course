#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"


#define SIZE 100

int main()
{
	char str[SIZE];
	printf("Enter a string: ");
	sgets(str);
	
	int len;
	for (len = 0; str[len] != '\0'; ++len)
		;
	
	for (int i = 0; i < len / 2; ++i)
	{
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
	printf("%s", str);
}
