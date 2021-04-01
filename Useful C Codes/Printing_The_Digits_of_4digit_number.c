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
	
	printf("The first digit: %d\n", x / 1000);
	printf("The second digit: %d\n", x / 100 % 10);
	//Alternative for second digit:printf("The second digit: %d\n", x % 1000 / 100);
	printf("The third digit: %d\n", x / 10 % 10);
	//Alternative for third digit:printf("The third digit: %d\n", x % 100 / 10);
	printf("The fourth digit: %d\n", x % 10);

}


