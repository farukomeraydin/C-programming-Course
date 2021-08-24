#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

void date_xyz(int d, int m, int y) {
	static const int daytabs[][13] = {
		{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
		{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	};
	daytabs[isleap(y)][m];
}

int main(void)
{
	
}
