#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	int d, m, y;
	printf("Enter a date: ");
	scanf("%d%d%d", &d, &m, &y);

	switch (day_of_the_week(d, m, y)) {
	case 0: printf("Sunday\n"); break;
	case 1: printf("Monday\n"); break;
	case 2: printf("Tuesday\n"); break;
	case 3: printf("Wednesday\n"); break;
	case 4: printf("Thursday\n"); break;
	case 5: printf("Friday\n");  break;
	case 6: printf("Saturday\n"); break;
	}
}
