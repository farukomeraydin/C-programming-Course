#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

typedef struct Data_ {
	int x, y, z;
}Data;


int main(void)
{
	Data d1 = { 1, 2, 3 };
	struct Data_ d2 = { 10, 20, 30 };
}
