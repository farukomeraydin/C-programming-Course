#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"



int main(int argc, char* argv[])
{
	printf("argc = %d\n", argc);

	for (int i = 0; i < argc; ++i)
		printf("argv[%d] = %s\n", i, argv[i]);
}
