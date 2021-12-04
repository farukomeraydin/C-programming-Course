#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	100

int main()
{
	char str[SIZE];

	printf("Enter a string: ");
	sgets(str);
	printf("(%s)\n", str);
	size_t n = strcspn(str, "0123456789");
	printf("n = %zu\n", n);
	puts(str + n);
}
