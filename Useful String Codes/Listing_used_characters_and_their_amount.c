#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"


#define SIZE 100

int main()
{
	int cnts[26] = {0};
	char str[SIZE];

	printf("Enter a string: ");
	sgets(str);

	for (int i = 0; str[i] != '\0'; ++i)
		if (isalpha(str[i]))
			++cnts[toupper(str[i]) - 'A'];

	for (int i = 0; i < 26; ++i)
		if (cnts[i] != 0)
			printf("%c		%d\n", 'A' + i, cnts[i]);
}
