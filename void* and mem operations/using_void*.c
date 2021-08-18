#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	void *vptr;
	int ival = 10;
	double dval = 3.4;
	char str[100] = "ali";

	//These are all valid
	vptr = &ival;
	vptr = &dval;
	vptr = str;
	vptr = &vptr;
}
