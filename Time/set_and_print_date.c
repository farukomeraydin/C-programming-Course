#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	Date d1;
	set_date(&d1, 19, 5, 1976);
	print_date(&d1);

	Date d2;
	set_date_today(&d2);
	print_date(&d2);

	Date d3;
	set_date_str(&d3, "15/05/1992");
	print_date(&d3);
}
