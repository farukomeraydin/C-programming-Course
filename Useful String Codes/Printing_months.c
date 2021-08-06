#define _CRT_SECURE_NO_WARNINGS
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
	for (size_t i = 0; i < asize(pmons); ++i)
		printf("%s\n", pmons[i]);
}
