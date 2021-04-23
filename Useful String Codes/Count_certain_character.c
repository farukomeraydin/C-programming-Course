#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"


#define SIZE 100

int main()
{
	char str[SIZE];
	int ch;

	printf("Enter a string: ");
	sgets(str);
	printf("Enter the character that will be counted: ");
	ch = getchar();

	int cnt = 0;
	for (int i = 0; str[i] != '\0'; ++i)
		if (toupper(str[i]) == toupper(ch))
			++cnt;
	printf("There are %d of %c character in total.\n", cnt, ch);
}
