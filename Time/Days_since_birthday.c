#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include "Mytime.h"

int main(void)
{
	Date bdate;

	printf("Enter a birthday: ");
	scan_date(&bdate);
	print_date(&bdate);

	Date todays_date;
	set_date_today(&todays_date);

	int n = get_date_diff(&todays_date, &bdate);
	printf("Today is %dth day of your life\n", n);
}
