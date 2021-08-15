#define _CRT_SECURE_NO_WARNINGS
#pragma	warning(disable:6031 6054)
#include "Omer.h"


int main()
{
	char str[100];
	int day, mon, year;

	printf("Enter date dd-mm-yyyy: "); //05-02-1987
	scanf("%s", str);
	printf("(%s)\n", str);

	day = atoi(str);
	mon = atoi(str + 3);
	year = atoi(str + 6);

	printf("Year:%d Month:%d Day:%d\n", year, mon, day);
}
