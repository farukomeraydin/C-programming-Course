#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	10

int main()
{
	int a[SIZE] = { 218, 336, 693, 908, 379, 684, 412, 354, 295, 909, };
	for (int i = 0; i < SIZE; ++i)
		printf("%d %d\n", i[a], a[i]); //No difference between i[a] and a[i]
}
