#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

typedef struct {
	int a, b, c;
}*DataPtr;


int main(void)
{
	DataPtr pd = malloc(sizeof (*pd));
	if (!pd) {
		printf("Memory doesn't have enough space\n");
		return 1;
	}

	pd->a = 10;
	pd->b = 20;
	pd->c = 10;

	printf("%d %d %d\n", pd->a, pd->b, pd->c);

	free(pd);
}
