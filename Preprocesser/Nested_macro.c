#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	100

#define random_elem(a)		a[rand() % asize(a)] //Nested macro

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	random_elem(a);
}
