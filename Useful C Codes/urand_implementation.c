#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	randomize();

	for (int i = 0; i < URAND_MAX; ++i)
		printf("%d ", urand());

	printf("\n");
	printf("\n");

	printf("%d ", urand());
}
