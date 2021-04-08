#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	10

typedef struct {
	int id;
	int age;
}Person;

int pcmp(const void *vp1, const void *vp2) {
	return ((const Person*)vp1)->id - ((const Person*)vp2)->id;
}

int pcmp2(const void *vp1, const void *vp2) {
	return ((const Person*)vp1)->age - ((const Person*)vp2)->age;
}

int main()
{
	Person a[SIZE];
	randomize();
	for (int i = 0; i < SIZE; ++i)
	{
		a[i].id = rand() % 20;
		a[i].age = rand() % 20 + 15;
	}
	qsort(a, SIZE, sizeof(*a), &pcmp);
	//qsort(a, SIZE, sizeof(*a), &pcmp2);
	for (int i = 0; i < SIZE - 1; ++i)
		for (int k = 0; k < SIZE - 1 - i; ++k)
			if (a[k].age > a[k + 1].age) {
				Person temp;
				temp.age = a[k].age;
				a[k].age = a[k + 1].age;
				a[k + 1].age = temp.age;

			}
	for (int i = 0; i < SIZE; ++i)
		printf("%2d  %d\n", a[i].id, a[i].age);
}
