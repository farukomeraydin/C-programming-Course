#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include "Mytime.h"

void func(int day, int mon, int year) {
	print_date(&(Date) {day, mon, year});
}

int main()
{
	Date mydate;
	mydate = (Date){ 2, 5, 2020 };

	Date a[5];
	a[2] = (Date){ 10, 5, 1987 };

	Date mydate2;
	int day = 12, mon = 3, year = 1990;

	mydate2 = (Date){ day, mon, year };

	func(2, 5, 1987);

	Date *ptr = (Date[]) {
		{2, 5, 1987},
		{ 7, 5, 1997 },
		{ 2, 1, 2020 },
	};

	for (int i = 1; i <= 12; ++i)
	{
		print_date(&(Date) { i, i, 2000 + i });
	}
}
