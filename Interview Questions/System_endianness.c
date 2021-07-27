#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	//Checking if the system is little or big endian
	int x = 1;
	char *p = (char*)&x;
	
	if (*p != 0)
		printf("little endian\n");
	else
		printf("big endian\n");
}//Interview Question
