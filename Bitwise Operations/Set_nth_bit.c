#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	int x = 10;
	bprint(x);
	int n;
	printf("Which bit will be set: ");
	scanf_s("%d", &n);
	x = x | 1 << n; //Sets nth bit
	bprint(x);
}
