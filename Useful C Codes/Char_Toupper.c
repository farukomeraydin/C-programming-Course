#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	int ch;
	printf("Enter a char: ");
	ch = getchar();
	printf("ch = %d\n", ch);
	printf("%c ---> %c\n", ch, toupper(ch));
}
