#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define	SIZE	100

int main(void)
{
	char str[SIZE];

	printf("Enter a string: ");
	sgets(str);
	char *pd = _strdup(str);

	printf("(%s) (%s)\n", str, pd);
	_strrev(pd);
	printf("(%s) (%s)\n", str, pd);
	free(pd);
}
