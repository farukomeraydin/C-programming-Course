#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable: 6031)
#include "Omer.h"
#include "Studentlist.h"


int main(void)
{
	int n;
	Student s;

	printf("How many students\n ");
	scanf_s("%d", &n);

	ListHandle h = create_list();

	for (int i = 0; i < n; ++i) {
		random_student(&s);
		push_front(h, &s);
	}

	printf("Adding process is done\n");
	_getch();
	print_list(h);
	make_empty(h);
}
