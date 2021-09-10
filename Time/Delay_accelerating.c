#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main(void)
{
	int stime = 200;
	int i = 0;
	for (;;) {
		printf(".");
		if (i % 10 == 0) {
			stime -= 10;
			if (stime == 0)
				break;
		}
		++i;
		Sleep(stime);
	}
}
