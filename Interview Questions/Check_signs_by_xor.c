#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	int x, y;
	printf("Enter two integers: ");
	scanf_s("%d%d", &x, &y);
	if ((x ^ y) < 0)
		printf("Opposite signs\n");
	else
		printf("Same signs\n");
}
