#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"


#define SIZE 100

int main()
{
	char str[SIZE];

	printf("bir yazi girin: ");
	scanf("%s", str);
	printf("[%s]\n", str);
	int ival = 0;

	int i = 0, flag = 0;

	if (str[i] == '-')
		i = 1, flag = 1;

	for (; str[i] != '\0'; ++i) {
		ival = ival * 10 + str[i] - '0';
	}

	if (flag)
		ival = -ival;

	printf("ival = %d\n", ival);
}
