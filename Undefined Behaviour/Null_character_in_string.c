#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	40

int main()
{
	char str[SIZE];

	str[0] = 'O';
	str[1] = 'K';

	//Undefined Behaviour because null character isn't put at the end of string
	for (int i = 0; str[i] != '\0'; ++i)
		putchar(str[i]);
		
}
