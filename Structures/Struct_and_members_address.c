#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Data {
	int x, y, z;
	double dval;
};

int main(void)
{
	struct Data mydata;
	printf("&mydata        = %p\n", &mydata);
	printf("&mydata.x      = %p\n", &mydata.x);
	printf("&mydata.y      = %p\n", &mydata.y);
	printf("&mydata.z      = %p\n", &mydata.z);
	printf("&mydata.dval   = %p\n", &mydata.dval);
}
