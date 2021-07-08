#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int	*p = a + 5;
	
	printf("%d\n", *p);
	printf("%d\n", p[0]);
	printf("%d\n", p[3]);
	printf("%d\n", p[-4]);
}
