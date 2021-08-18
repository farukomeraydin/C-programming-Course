#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	int sval;
	printf("Searched value: ");
	scanf_s("%d", &sval);

	int *p = gsearch(a, SIZE, sizeof(*a), &sval);
	if (p)
		printf("Found it! %d value is in %dth index\n", *p, (int)(p - a));
	else
		printf("Couldn't found it\n");
}
