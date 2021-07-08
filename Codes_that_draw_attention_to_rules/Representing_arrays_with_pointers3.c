#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];

	set_random_array(a, SIZE);
	display_array(a, SIZE);
	display_array(a, 5);	//prints the first 5 elements
	display_array(a + 5, 3);
	display_array(a + SIZE - 5, 5);	//prints the last 5 elements
}
