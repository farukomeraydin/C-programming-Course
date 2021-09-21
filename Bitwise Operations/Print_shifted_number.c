#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	int ival;
	printf("Enter an integer: ");
	scanf_s("%d", &ival);

	bprint(ival);
	bprint(ival << 1);
}
