#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#define	SIZE	20

int main()
{
	int x;

	printf("Enter an integer: ");
	scanf_s("%d", &x);

	char str[SIZE];
	int idx = 0;
	int temp = x;
	while (temp) {
		str[idx++] = temp % 10 + '0';
		temp /= 10;
	}
	str[idx] = '\0';
	_strrev(str);
	printf("(%s)\n", str);
}
