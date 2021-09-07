#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Data {
	double d1, d2;
	int x, y, z;
};

int main(void)
{
	struct Data data = { .d2 = 2.3, .y = 56, .z = 12 }; //Designated initializer
	printf("%f %f\n", data.d1, data.d2);
	printf("%d %d %d\n", data.x, data.y, data.z);
}
