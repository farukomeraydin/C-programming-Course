#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#define SIZE	80

int main()
{
	char str[SIZE];
	fgets(str, SIZE, stdin);
	printf("%s", str);
	return 0;
}
