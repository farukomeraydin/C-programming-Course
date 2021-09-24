#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	int x;
	printf("Enter an integer: ");
	scanf_s("%d", &x);
	x = -~x; //Increments by one
	//x = ~-x; //Decrements by one
	printf("x = %d\n", x);
}
