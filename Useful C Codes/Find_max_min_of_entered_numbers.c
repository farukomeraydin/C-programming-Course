#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"
#include <limits.h>

int main()
{
	int c, ival;
	int cnt = 0;
	int max = INT_MIN;
	int min = INT_MAX;
	
	while (1) {
		printf("Are you gonna enter a number (y) (n)  ");
		while ((c = toupper(_getch())) != 'Y' && c != 'N')
			;
		printf("%c\n", c);
		if (c == 'N')
			break;
		printf("Enter integer number: ");
		scanf("%d", &ival);

		if (ival > max)
			max = ival;
		else if (ival < min)
			min = ival;
		++cnt;
		printf("%d\n", ival);
	}
	if (cnt != 1 && cnt) {
		printf("In total %d numbers are entered\n", cnt);
		printf("max = %d\n", max);
		printf("min = %d\n", min);
		printf("Counter: %d", cnt);
	}
	else if (cnt == 1)
		printf("Only 1 number is entered: %d", ival);
	else
		printf("No entry!\n");
}
