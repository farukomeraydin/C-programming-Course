#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

/*Preprocessor doesn't know standard functions or anything*/
#define printf(x)	printf("%d\n", x)

int main()
{
	int ival = 10;
	printf(ival);

}
