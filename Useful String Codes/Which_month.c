#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include "Omer.h"


int main()
{
	const char* pmons[] = {
	"",
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
	
	int n;

	printf("Which month: ");
	scanf("%d", &n);
	printf("%dth month of the year is %s \n", n, pmons[n]);
}
