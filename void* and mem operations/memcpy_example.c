#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#define SIZE	20

int main()
{
	int a[SIZE];
	int b[SIZE];

	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	memcpy(b, a, sizeof(a));
	display_array(b, SIZE);
}
