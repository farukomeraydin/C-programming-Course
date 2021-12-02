#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Data {
	int x, y, z;
	int a[]; //flexible array member
};

int main()
{
	int n;
	printf("How many elements: ");
	scanf("%d", &n);
	struct Data *pd = malloc(sizeof(struct Data) + n * sizeof(int));

	pd->x = 10;
	pd->y = 20;
	pd->z = 30;

	for (int i = 0; i < n; ++i)
		pd->a[i] = i;


}
