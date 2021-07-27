#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main()
{
	for (int i = 0; i < 16; ++i)
		putchar(get_hexchar(i));

	//String literal is static therefore we used get_hexchar instead of get_hexchar2
}
