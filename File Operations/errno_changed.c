#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main()
{
	printf("errno: %d\n", errno);
	FILE* f = fopen("deneme.txt", "r");
	if (f)
		printf("File opened\n");
	else
		printf("File cannot opened\n");
	printf("errno: %d\n", errno);
	if (f)
		fclose(f);
}
