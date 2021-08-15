#define _CRT_SECURE_NO_WARNINGS
#pragma	warning(disable:6031 6054)
#include "Omer.h"


int main()
{
	char str[100];
	
	printf("Enter a string: ");
	scanf("%s", str);

	int ival = atoi(str);
	double dval = atof(str);

	printf("ival = %d\n", ival);
	printf("dval = %f\n", dval);
}
