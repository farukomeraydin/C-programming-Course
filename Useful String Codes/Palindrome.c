#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"


#define SIZE 100

int main()
{
	char str[SIZE];
	char temp[SIZE];
	printf("Enter a string: ");
	sgets(str);
	printf("[%s]\n", str);

	int idx = 0;

	for (int i = 0; str[i] != '\0'; ++i)
		if (isalpha(str[i]))
			temp[idx++] = toupper(str[i]);

	int i = 0;
	for (; i < idx / 2; ++i)
		if (temp[i] != temp[idx - i - 1])
			break;
	if (i == idx / 2)
		printf("Palindrome string\n");
	else
		printf("Not palindrome string\n");
}
