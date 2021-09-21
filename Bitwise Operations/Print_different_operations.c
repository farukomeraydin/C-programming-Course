#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	int x, y;
	printf("Enter two integers: ");
	scanf_s("%d%d", &x, &y);

	bprint(x);
	bprint(y);
	bprint(x & y);
	bprint(x | y);
}
