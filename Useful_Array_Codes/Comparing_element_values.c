#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];
	randomize();

	set_random_array(a, SIZE);
	display_array(a, SIZE);
	randomize();
	int *p1 = a + rand() % SIZE;
	int *p2 = a + rand() % SIZE;

	if (*p1 > *p2)
		printf("Correct\n");
	else
		printf("Incorrect\n");
	printf("%d %d\n", *p1, *p2);
}
