#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int x = 10;
	int y = 20;

	const int *ptr = &x; //pointer to const int
	//Low level const

	//*ptr = 987; //invalid
	ptr = &y;	//valid
}
