#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	int x, c;
	printf("Enter a hex number: ");
	x = 0;
	while ((c = getchar()) != '\n')
		if (isdigit(c))
			x = x * 16 + c - '0';
		else if (isxdigit(c))
			x = x * 16 + toupper(c) - 'A' + 10;
	printf("x = %d\n", x);
			
}
