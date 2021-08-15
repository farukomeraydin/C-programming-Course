#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#define	SIZE	100

int main()
{
	int x;
	char str[SIZE];

	printf("Enter an integer: ");
	scanf_s("%d", &x);

	printf("Decimal\n");
	_itoa(x, str, 10);
	printf("[%s]\n", str);

	printf("Hexadecimal\n");
	_itoa(x, str, 16);
	printf("[%s]\n", str);

	printf("Octal\n");
	_itoa(x, str, 8);
	printf("[%s]\n", str);

	printf("Binary\n");
	_itoa(x, str, 2);
	printf("[%s]\n", str);
}
