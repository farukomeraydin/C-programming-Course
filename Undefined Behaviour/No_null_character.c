#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	40

int main()
{
	char str[3] = { 'A', 'L', 'P' };
	//Undefined Behaviour because there is no null character
	for (int i = 0; str[i] != '\0'; ++i)
		printf("%c", str[i]);
		
}
