#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"


#define SIZE 100

int main()
{
	int x;

	printf("Enter an integer: ");
	scanf("%d", &x);
	char str[SIZE] = "";

	int temp = x;
	int idx = 0;

	while (temp != 0) {
		str[idx++] = temp % 10 + '0';
		temp /= 10;
	}
	str[idx] = '\0';

	for (int i = 0; i < idx / 2; ++i)
	{
		char temp = str[i];
		str[i] = str[idx - 1 - i];
		str[idx - 1 - i] = temp;
	}
	printf("[%s]\n", str);
}
