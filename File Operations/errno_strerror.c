#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main()
{
	printf("errno: %d\n", errno);
	FILE* f = fopen("deneme.txt", "r");
	if (errno)
		printf("There is an error, error code %d ---> %s\n", errno, strerror(errno));
}
