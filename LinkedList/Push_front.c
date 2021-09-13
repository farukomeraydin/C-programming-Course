#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include "Studentlist.h"


int main(void)
{
	Student s;
	randomize();
	ListHandle h = create_list();
	for (int i = 0; i < 20; ++i) {
		random_student(&s);
		print_student(&s);
		push_front(h, &s);
	}
	printf("\n\n\n");
	print_list(h);
}
