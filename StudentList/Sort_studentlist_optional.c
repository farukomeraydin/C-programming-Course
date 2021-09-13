#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"
#include "Studentlist.h"
#define	SIZE	20

typedef int(*FCMP)(const void*, const void*);

void print_menu() {
	printf(
		"[1] Sort by number\n"
		"[2] Sort by name\n"
		"[3] Sort by Surname\n"
		"[4] Sort by Town\n"
		"[5] Sort by Birthdate\n"
		"Enter a number: ");
}

void print_student_array(const Student* p, size_t size) {
	while (size--)
		print_student(p++);
}


int main(void)
{
	FCMP fpa[] = {
		(FCMP)&cmpStudentbyNo,
		(FCMP)&cmpStudentbyName,
		(FCMP)&cmpStudentbySurname,
		(FCMP)&cmpStudentbyTown,
		(FCMP)&cmpStudentbyDate,
	};

	Student a[SIZE];
	randomize();

	for (int i = 0; i < SIZE; ++i)
		random_student(a + i);
	
	for (;;) {
		print_menu();
		int option;
		scanf("%d", &option);
		Sleep(200);
		system("cls");
		qsort(a, asize(a), sizeof(*a), fpa[option - 1]);
		print_student_array(a, SIZE);
		_getch();
		system("cls");
	}
}
