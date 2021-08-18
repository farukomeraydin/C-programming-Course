#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main()
{
	int x = 10, y = -1; 

	int cmp_result = memcmp(&x, &y, sizeof(int));

	if (cmp_result > 0)
		printf("First one is greater\n");
	else if (cmp_result < 0)
		printf("Second one is greater\n");
	else
		printf("Equal\n");
}
