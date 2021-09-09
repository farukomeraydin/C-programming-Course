#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

typedef struct tagData {
	int x, y, z;
}Data, *DataPtr;


int main(void)
{
	struct tagData a = { 2, 3, 3 };
	Data b = a;
	DataPtr p = &b;

	printf("%d %d %d\n", a.x, a.y, a.z);
	printf("%d %d %d\n", b.x, b.y, b.z);
	printf("%d %d %d\n", p->x, p->y, p->z);
}
