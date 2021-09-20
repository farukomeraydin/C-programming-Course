#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

enum Color{White, Blue, Green, Yellow, Red, Black};
const char* const p[] = { "White", "Blue", "Green", "Yellow", "Red", "Black" };

double vals[] = { [Green] = 2.3,[Red] = 4.5,[White] = 3.4 };

int main(void)
{
	printf("%s\n", p[Red]);
}
