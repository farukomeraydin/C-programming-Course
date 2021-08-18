#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int a[5][6] = {
		{1, 2, 3, 6, 8, 12},
		{-1, -4, -6, -2, -6},
		{12, 41, 67, 26, 68},
		{2, 2, 2, 2, 1, 6},
		{8, 10, 12, 14, 17, 236},
	};

	int(*p)[6] = a;
	int n = 5;
	
	while (n--) 
		display_array(*p++, 6);
}
