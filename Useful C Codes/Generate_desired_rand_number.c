#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	srand((unsigned)time(0));
	int ival;

	while ((ival = rand() % 1000) != 500) {
		printf("%d ", ival);
	}
	printf("\n\n");

	printf("ival = %d\n", ival);
}
