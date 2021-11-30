#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define swap(x,y) {int temp = x; x = y; y = temp;}

int main()
{
	int a = 10, b = 20;
	if (a > 10)
		swap(a, b); //Because of ";" you will get an error
	else
		++a;
}
