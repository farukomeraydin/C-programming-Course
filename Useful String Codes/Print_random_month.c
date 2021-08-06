#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include "Omer.h"


int main()
{
	const char* pmons[] = {
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
	};
	
	for (;;) {
		printf("%s ", pmons[rand() % asize(pmons)]);
		_getch();
	}
}
