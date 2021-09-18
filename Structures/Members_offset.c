#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

typedef struct {
	char c1;
	int ival;
	char c2;
}Data;

int main(void)
{
	printf("%zu\n", offsetof(Data, c1));
	printf("%zu\n", offsetof(Data, ival));
	printf("%zu\n", offsetof(Data, c2));
}
