#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main(int argc, char* argv[])
{
	int i = 0;
	while (argv[i] != NULL) {
		printf("argv[%d] = %s\n", i, argv[i]);
		++i;
	}
}
