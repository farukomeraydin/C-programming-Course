#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Data {
	int x, y, z;
	int a[]; //flexible array member
};

int main()
{
	printf("sizeof(struct Data) = %zu\n", sizeof(struct Data));
}
