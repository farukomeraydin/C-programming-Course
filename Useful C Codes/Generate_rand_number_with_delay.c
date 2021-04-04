#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	randomize();
	for (;;) {
		printf("%d ", rand() % 6 + 1);
		Sleep(10);
	}
}
