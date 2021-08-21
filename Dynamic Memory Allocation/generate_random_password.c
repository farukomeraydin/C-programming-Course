#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define	SIZE	20

int main(void)
{
	char *p[SIZE];

	randomize();
	for (int i = 0; i < SIZE; ++i)
		p[i] = create_random_psw3();

	printf("\n");

	for (int i = 0; i < SIZE; ++i)
		printf("%s\n", p[i]);

	for (int i = 0; i < SIZE; ++i)
		free(p[i]);
}
