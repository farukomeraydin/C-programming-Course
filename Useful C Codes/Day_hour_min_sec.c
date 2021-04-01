#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	int day, hour, min, sec;
	printf("Enter the amount of day,hour,minute,and seconds: ");
	scanf("%d%d%d%d", &day, &hour, &min, &sec);

	min += sec / 60;
	sec %= 60;

	hour += min / 60;
	min %= 60;

	day += hour / 24;
	hour %= 24;
	
	printf("%d days %d hours %d minutes and %d seconds\n", day, hour, min, sec);
}
