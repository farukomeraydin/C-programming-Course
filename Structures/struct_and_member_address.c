#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Data {
	int x, y, z;
	double dval;
};

int main(void)
{
	struct Data mydata;
	printf("&mydata     = %p\n", &mydata);
	printf("&mydata.x   = %p\n", &mydata.x); //should be the same address
}
