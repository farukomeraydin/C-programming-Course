#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	40
#define MAX_VAL	50

int main()
{
	int a[SIZE];
	int f[MAX_VAL] = { 0 };

	randomize();
	set_random_array(a, SIZE);
	for (int i = 0; i < SIZE; ++i)
		a[i] = a[i] % MAX_VAL;

	display_array(a, SIZE);

	for (int i = 0; i < SIZE; ++i)
		++f[a[i]];

	int mod = f[0];
	int fre = 0;

	for (int i = 1; i < MAX_VAL; ++i)
		if (f[i] > mod) {
			mod = f[i];
			fre = i;
		}
	printf("mod = %d and %d of it exists\n", fre, mod);
}
