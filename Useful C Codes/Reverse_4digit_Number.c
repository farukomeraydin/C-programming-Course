#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	int x;
	printf("Enter a 4 digit number: ");
	scanf("%d", &x);

	printf("Reversed version of %d number is %d\n", x, x / 1000 + x % 1000 / 100 * 10 + x / 10 % 10 * 100 + x % 10 * 1000);

}


