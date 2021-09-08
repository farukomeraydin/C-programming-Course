#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Data {
	int x, y;
	double d1, d2;
};

int main(void)
{
	struct Data data = { 1, 4, 3.4, 8.1 };
	struct Data* p = &data;
	printf("%f\n", (*p).d2);
}
