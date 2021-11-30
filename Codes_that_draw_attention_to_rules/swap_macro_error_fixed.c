#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define swap(x, y) do{int temp = x; x = y; y = temp;}while(0)

int main()
{
	int a = 10, b = 20;
	if (a > 5)
		swap(a, b);
	else
		++a;
}
