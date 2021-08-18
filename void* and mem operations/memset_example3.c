#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	char str[100] = "Today there was a heavy rain";
	memset(str + 3, 'X', 7);

	puts(str);
}
