#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define   SIZE      100

int main()
{
	char str[SIZE];

	printf("Enter a string: ");
	sgets(str);

	unsigned int i;
	for (i = 0; str[i] != '\0'; ++i)
		;

	while (i) {
		putchar(str[i-1]);
		i -= 1;
	}
	printf("\ni=%u\n", i);
}
