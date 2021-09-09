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
	struct Employee a[10];

	a[5].wage_ = 4.86;

	//or (a + 5)->wage_ = 4.86;

	a->no_ = 4444;
	//or a[0].no_ = 4444;

}
