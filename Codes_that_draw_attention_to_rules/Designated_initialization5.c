#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

typedef union {
	int x;
	double dval;
	char str[20];
}Data;

int main()
{
	//Data data = { 19 };
	Data data = { .dval = 2.3 }; //This came with C99
}
