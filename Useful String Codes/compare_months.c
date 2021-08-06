#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
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
	
	char entry[40];

	printf("Enter a month name: ");
	scanf("%s", entry);
	size_t i;

	for (i = 0; i < asize(pmons); ++i)
		if (!_stricmp(pmons[i], entry))
			break;

	if (i < asize(pmons))
		printf("%s is %dth month of the year\n", entry, i + 1);
	else
		printf("%s is not a valid month\n", entry);
}
