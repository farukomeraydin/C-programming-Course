#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


typedef struct {
	int ival;
	union {
		int x;
		double dval;
		char str[20];
	};
}Nec;

int main()
{
	Nec data = {.x = 40};
	//or
	data.x = 40;
}
