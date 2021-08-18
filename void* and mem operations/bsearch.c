#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	qsort(a, SIZE, sizeof(int), &icmp);
	display_array(a, SIZE);

	int ival;
	printf("Enter the searched value: ");
	scanf_s("%d", &ival);

	int *ptr = (int*)bsearch(&ival, a, SIZE, sizeof * a, &icmp);
	if (ptr != NULL)
		printf("Found it... Index is %d\n", (int)(ptr - a));
	else
		printf("Couldn't found it\n");
}
