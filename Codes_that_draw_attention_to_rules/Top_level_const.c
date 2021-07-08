#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int x = 10;
	int y = 20;

	int* const ptr = &x; //const pointer to int
	//Top level const
	//ptr = &y; //invalid
	*ptr = 987; //valid
	printf("x = %d\n", x);
