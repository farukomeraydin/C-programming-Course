#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Data {
	int x, y;
	int a[4];
	double d1, d2;
};

int main(void)
{
	struct Data data = { 10, 20, {1, 2,}, 4.4, 6.6 };
	printf("%d %d\n", data.x, data.y);
	display_array(data.a, 4);
	printf("%f %f\n", data.d1, data.d2);
}
