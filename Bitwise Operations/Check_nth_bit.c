#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	int x = 10;
	bprint(x);
	int n;
	printf("Which bit will be checked: ");
	scanf_s("%d", &n);

	if (x & (1 << n))
		printf("%dth bit is 1\n", n);
	else
		printf("%dth bit is 0\n", n);
}
