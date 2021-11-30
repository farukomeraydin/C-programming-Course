#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main()
{
	for (int i = 0; i < 20; ++i)
		puts(strerror(i));
}
