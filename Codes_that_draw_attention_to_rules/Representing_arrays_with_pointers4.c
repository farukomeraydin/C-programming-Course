#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);

	display_array(a, SIZE);	//prints the entire array
	display_array2(a, a + SIZE); //prints the entire array
	display_array2(a + 3, a + 8); //prints the elements a[2]-a[7] in the array
}
