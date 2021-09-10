#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include "Mytime.h"

int main(void)
{
	Date today;
	set_date_today(&today);
	Date future_date;

	printf("Today: ");
	print_date(&today);

	for (int i = 1; i < 1000000000; i *= 10) {
		printf("%d days later: ", i);
		ndaysafter(&future_date, &today, i);
		print_date(&future_date);
	}
}
