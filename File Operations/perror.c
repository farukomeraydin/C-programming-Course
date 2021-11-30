#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main()
{
	printf("errno: %d\n", errno);
	FILE* f = fopen("deneme.txt", "r");
	if (errno)
		perror("error ");
	if (f)
		fclose(f);
}
