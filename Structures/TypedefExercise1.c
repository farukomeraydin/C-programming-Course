#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Data {
	int x, y, z;
};

typedef struct Data Data, *DataPtr;

int main(void)
{
	Data x = { 1, 3, 5 };
	DataPtr ptr = &x;
	printf("%d %d %d\n", x.x, x.y, x.z);
	printf("%d %d %d\n", (*ptr).x, (*ptr).y, (*ptr).z);
	printf("%d %d %d\n", ptr -> x, ptr -> y, ptr -> z);
}
