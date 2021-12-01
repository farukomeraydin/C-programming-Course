#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#include <stdarg.h>

void func(int x, int y, ...) {
	va_list args;
	va_start(args, y);

	
	int ival = va_arg(args, int);
	printf("%d\n", ival);
	ival = va_arg(args, int);
	printf("%d\n", ival);
	va_end(args);
}

int main()
{
	func(10, 20, 'A', 2.3f); //3rd argument will be int, 4th will bee double. This is default argument conversion
	//func(10, 29, 3, 5);
}
