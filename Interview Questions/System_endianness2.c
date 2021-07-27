#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	//Checking if the system is little or big endian
	int x = 1;
	
	if (*(char*)&x)
		printf("little endian\n");
	else
		printf("big endian\n");
}//Interview Question
