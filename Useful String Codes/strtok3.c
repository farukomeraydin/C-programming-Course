#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	100

int main()
{
	char str[SIZE];
	printf("Enter a string: ");
	sgets(str);
	size_t len = strlen(str);
	int cnt = 0;

	printf("(%s)\n", str);
	char* p = strtok(str, " \t"); 
	while (p) {
		printf("[%2d] %s\n", ++cnt, p);
		p = strtok(NULL, " \t");
	}
	printf("\n");
	for (size_t i = 0; i < len; ++i)
	{
		printf("%d ", str[i]);
	}
	printf("\n");
}
