#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define __FUNCSIG__	__PRETTY_FUNCTION__

int foo(int x, int y) {
	printf("%s file's %dth line\n", __FILE__, __LINE__);
	printf("Compilation date & time: %s   %s\n", __DATE__, __TIME__);
	printf("Function's name: %s\n", __func__);
	printf("%s\n", __FUNCSIG__);
	//printf("Standard %d \n", __STDC_VERSION__); //__STDC_VERSION__ is defined if it is compiled with standard C compiler
	return x * y;
}

int main()
{
	foo(10, 30);
}
