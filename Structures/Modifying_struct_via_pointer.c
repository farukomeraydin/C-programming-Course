#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Employee {
	int no_;
	char name_[20];
	char surname_[20];
	double wage_;
};

int main(void)
{
	struct Employee ex = { 2341, "Mustafa", "Yesilkent", 80.40 };

	printf("%5d %16s %16s %.2f\n", ex.no_, ex.name_, ex.surname_, ex.wage_);
	struct Employee* p = &ex;

	(*p).no_ = 34;
	(*p).wage_ *= 2.3;

	strcat((*p).name_, "can");
	strcat((*p).surname_, "li");

	printf("%5d %16s %16s %.2f\n", ex.no_, ex.name_, ex.surname_, ex.wage_);
}
