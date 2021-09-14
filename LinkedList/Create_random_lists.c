#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable: 6031)
#include "Omer.h"
#include "Studentlist.h"
#define NLIST	1000	


int main(void)
{
	ListHandle a[NLIST];
	Student s;

	randomize();

	for (int i = 0; i < NLIST; ++i)
	{
		a[i] = create_list();
		int n = rand() % 10 + 10;
		while (n--) {
			random_student(&s);
			push_front(a[i], &s);
		}
	}

	for (int i = 0; i < NLIST; ++i)
	{
		printf("In %d. list there are %zu students\n", i + 1, get_size(a[i]));
		print_list(a[i]);
		_getch();
		system("cls");
	}

	for (int i = 0; i < NLIST; ++i)
		close_list(a[i]);
}
