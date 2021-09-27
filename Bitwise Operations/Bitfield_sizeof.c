#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

typedef struct {
	unsigned int x : 7;
	unsigned int y : 7;
	unsigned int z : 7;
	unsigned int t : 7;
	unsigned int m : 5;
}Data;

int main(void)
{
	printf("sizeof(Data) = %zu\n", sizeof(Data));
}
