#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main(void)
{
	int c;

	randomize();

	int *pd = NULL;
	int cnt = 0;

	while (1) {
		printf("Yes (y) or No (n) ");
		while ((c = _getch()) != 'y' && c != 'n')
			;
		printf("\n%c\n", c);

		if (c == 'n')
			break;
		pd = (int*)realloc(pd, (cnt + SIZE) * sizeof(int));
		if (!pd) {
			printf("Memory doesn't have enough space\n");
			return 1;
		}

		set_random_array(pd + cnt, SIZE);
		display_array(pd, cnt + SIZE);
		cnt += SIZE;
	}
	printf("Current size of array: %d\n", cnt);
	bsort(pd, cnt);
	display_array(pd, cnt);
	free(pd);
}
