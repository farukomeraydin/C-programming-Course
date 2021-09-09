#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Data{
	int x, y, z;
};

typedef struct Data Data;
typedef struct Data* DataPtr;

int main(void)
{
	Data mydata = { 10, 20, 30 };
	Data dx = { 20, 79, 45 };
	const DataPtr p = &mydata; //if const is used with typedef, it is always top-level const

	//p = &dx; //invalid 
	*p = dx; //valid

	printf("%d %d %d\n", p->x, p->y, p->z);
}
