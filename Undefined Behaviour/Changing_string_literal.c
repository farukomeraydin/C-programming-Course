#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	char* p = "dert";
	*p = 'M'; //Attempt to change a string literal is ub.
	puts(p);
}
