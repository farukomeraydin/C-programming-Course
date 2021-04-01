#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	int x, c;
	printf("Enter a hexadecimal integer number:");
	x = 0;

	while ((c = getchar()) != '\n')
		if (c >= '0' && c <= '9')
			x = x * 16 + c - '0';
		else
			x = x * 16 + c - 'A' + 10;

	printf("x = %d", x);
}


