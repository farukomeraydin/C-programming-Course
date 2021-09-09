#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	5

int main(void)
{
	char entry[100];
	char* p[SIZE];
	for (int i = 0; i < SIZE; ++i) {
		printf("Enter a string: ");
		sgets(entry);
		p[i] = _strdup(entry);
	}

	for (int i = 0; i < SIZE; ++i)
		puts(p[i]);

	for (int i = 0; i < SIZE; ++i)
		free(p[i]);
}
