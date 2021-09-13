#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Bruh {
	int x, y, z;
};

struct Data {
	struct Bruh* pb;
	int a, b, c;
	double dval;
};

int main(void)
{
	struct Bruh mybruh;
	struct Data mydata;
	mydata.pb = &mybruh;

	struct Data* pdata = &mydata;
	pdata->pb->y = 34;
	mydata.pb->y = 10;
}
