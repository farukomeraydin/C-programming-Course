#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	unsigned int x = 0x12AE23BF;
	unsigned char* p = (unsigned char*)&x;

	printf("%X\n", *p++); //BF
	printf("%X\n", *p++); //23
	printf("%X\n", *p++); //AE
	printf("%X\n", *p); //12
}
