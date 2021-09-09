#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct {
	int x, y, z;
}a = { 1, 4, 6 };

struct {
	int x, y, z;
}b = { 2, 2, 3 };

int main(void)
{
	a = b; //Syntax Error
}
