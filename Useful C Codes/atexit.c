#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

void f4()
{
	printf("f4 is called and cleanup operations carried out\n");
}

void f3()
{
	printf("f3 is called and cleanup operations carried out\n");

}

void f2()
{
	printf("f2 is called and cleanup operations carried out\n");

}


void f1()
{
	printf("f1 is called and cleanup operations carried out\n");
}




int main(void)
{
	atexit(f1);
	atexit(f2);
	atexit(f3);
	atexit(f4);
	printf("This is executed first.\n");
}
