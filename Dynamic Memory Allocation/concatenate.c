#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define	SIZE	20

int main(void)
{
	char s1[SIZE];
	char s2[SIZE];

	printf("Enter a string: ");
	sgets(s1);
	printf("Enter another string: ");
	sgets(s2);

	char *pd = strcon(s1, s2);
	printf("(%s) + (%s) = (%s)\n", s1, s2, pd);
	_strrev(pd);
	printf("(%s) + (%s) = (%s)\n", s1, s2, pd);

	free(pd);
}
