#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Data {
	int x, y;
	double dval;
	char str[16];
};

int main(void)
{
	printf("sizeof(struct Data) = %zu\n", sizeof(struct Data));
}
