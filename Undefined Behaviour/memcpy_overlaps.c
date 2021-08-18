#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#define SIZE	100

int main()
{
	int a[SIZE];

	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);

	memcpy(a + 20, a, 60 * sizeof(int)); //ub because copying takes place between objects that overlap
}
