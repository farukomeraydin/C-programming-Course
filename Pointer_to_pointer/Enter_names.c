#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	5
#define MAX_LEN		32

int main(void)
{
	char names[SIZE][MAX_LEN + 1];

	for (int i = 0; i < SIZE; ++i) {
		printf("Enter name: ");
		sgets(names[i]);
	}

	for (int i = 0; i < SIZE; ++i)
		puts(names[i]);
}
