#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	Date dx;
	for (int i = 0; i < 10; ++i) {
		random_date(&dx);
		print_date(&dx);
	}
}
