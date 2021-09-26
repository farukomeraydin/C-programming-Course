#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	int x;
	printf("Enter an integer: ");
	scanf_s("%d", &x);

	if (x & 1) {
		printf("x & 1 means x is an odd number\n");
	}
}
