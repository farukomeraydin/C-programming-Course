#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	100
typedef unsigned char Byte;

int main()
{
	Byte a[SIZE] = { 0 };

	randomize();

	for (int i = 0; i < SIZE; ++i)
		a[rand() % SIZE] = 1;

	for (int i = 0; i < SIZE; ++i)
		printf("%u", a[i]);
	printf("\n");

	Byte* p = memchr(a, 0, sizeof(a));
	if (!p)
		printf("Zero doesn't exists\n");
	else
		printf("Index: %d\n", (int)(p - a));
}
