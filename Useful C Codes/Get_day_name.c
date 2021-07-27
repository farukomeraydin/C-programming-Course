#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031) //Warning disable for scanf
#include "Omer.h"

int main()
{
	int n;
	printf("Which day of the week? ");
	scanf("%d", &n);
	printf("%d th day of the week is %s\n", n, get_day_name(n));
	//BEWARE! Name of the days are Turkish, but you can change the string literals
}
