#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	srand((unsigned)time(0));
	for (;;) {
		int c = rand() % 128;
		if (isgraph(c)) {
			printf("%c", c);
			delay(0.03);
		}
	}
}
