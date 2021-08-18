#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	char str[100] = "gulden";

	memmove(str + 3, str, strlen(str) + 1);

	puts(str);
}
