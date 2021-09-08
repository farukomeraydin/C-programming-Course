#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Data {
	int x, y;
	double d1, d2;
};

int main(void)
{
	struct Data dx = { 1, 4, 3.4, 8.1 };
	struct Data dy;

	dy = dx;

	printf("%d %d  %f %f\n", dx.x, dx.y, dx.d1, dx.d2);
	printf("%d %d  %f %f\n", dy.x, dy.y, dy.d1, dy.d2);
}
