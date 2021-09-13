#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"
#include "Studentlist.h"
#define	SIZE	20

typedef int(*FCMP)(const void*, const void*);

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
	
	for (size_t i = 0; i < asize(fpa); ++i)
	{
		qsort(a, SIZE, sizeof(*a), fpa[i]);
		print_student_array(a, SIZE);
		_getch();
		system("cls");
	}
}
