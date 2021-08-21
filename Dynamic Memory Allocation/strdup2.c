#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031 6001)
#include "Omer.h"

#define	SIZE	20

int main(void)
{
	char str[SIZE];

	for (;;) {
		printf("Enter a string: ");
		sgets(str);
		char* p1 = _strdup(str);
		char* p2 = _strdup(str);
		char *p3 = _strdup(str);
		_strrev(p1);
		sort1(p2);
		sort2(p3);
		system("cls");
		puts(str);
		puts(p1);
		puts(p2);
		puts(p3);
		_getch();
		free(p1);
		free(p2);
		free(p3);
	}
}
