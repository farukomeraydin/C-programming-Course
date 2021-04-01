#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	printf("Password:");
	int c1 = _getch();
	putchar('*');
	int c2 = _getch();
	putchar('*');
	int c3 = _getch();
	putchar('*');
	int c4 = _getch();
	putchar('*');

	printf("\nYour password is:%c%c%c%c\n", c1, c2, c3, c4);
}


