#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	int x, y;
	printf("Enter two integers: ");
	scanf_s("%d%d", &x, &y); //10 20

	if (x && y)
		printf("True\n");
	else
		printf("False\n");

	if (x & y)
		printf("True\n");
	else
		printf("False\n");

	bprint(x);
	bprint(y);
	bprint(x & y);
}
