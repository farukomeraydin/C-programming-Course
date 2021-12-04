#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#define	NDEBUG
#include <assert.h>

void func(int size) {
	//code
	assert("Should be size > 0" && size > 0);
	//code
	printf("No error\n");
}


int main()
{
	func(0);
}
