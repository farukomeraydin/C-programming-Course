#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	randomize();
	int x = 0;
	for (;;) {
		do {
			bprint(x);
			x |= 1 << (rand() % (sizeof(int) * 8));
			Sleep(15);
		} while (x != -1);
		Sleep(35);
		do {
			bprint(x);
			x &= ~(1 << (rand() % (sizeof(int) * 8)));
			Sleep(15);
		} while (x);
	}
}
