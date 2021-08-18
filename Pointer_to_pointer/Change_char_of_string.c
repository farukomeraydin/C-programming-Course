#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	char s1[] = "ali";
	char s2[] = "mehmet";
	char s3[] = "kayhan";
	char s4[] = "cetin";
	char s5[] = "semih";

	char *p[] = { s1, s2, s3, s4, s5 };

	puts(s4);
	p[3][0] = 's';
	p[3][2] = 'l';
	puts(s4);
}//If s1-s5 were const char, then it would be undefined behaviour
