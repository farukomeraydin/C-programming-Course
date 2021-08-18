#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#define SIZE	20

int main()
{
	int x;
	
	memset(&x, 255, sizeof x); 
	printf("x = %d\n", x); //It will print -1 

	memset(&x, 1, sizeof x); // It will set every byte to 1
	//If int is 4 byte: 0001 0001 0001 0001
	printf("x = %d\n", x); //It will print whatever the value is.
}
