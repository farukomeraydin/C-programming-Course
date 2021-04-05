#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	100

int main()
{
	int a[SIZE];
	randomize();
	for (int i = 0; i < SIZE; ++i)
	{
		a[i] = rand() % 1000;
		printf("%3d%c", a[i], i % 20 == 19 ? '\n' : ' ');
	}
	printf("\n\n");
	int val;
	printf("Enter the number you want to search: ");
	scanf("%d", &val);
	
	int i;
	for (i = 0; i < SIZE; ++i)
		if (a[i] == val)
			break;
	if (i < SIZE)
		printf("Number found, index is %d\n", i);
	else
		printf("Not found\n");
}
