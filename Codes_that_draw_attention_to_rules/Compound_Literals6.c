#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"



int main()
{
	struct tm* p = localtime(&(time_t) { time(NULL) });
	printf("%02d %02d %d\n", p->tm_mday, p->tm_mon + 1, p->tm_year + 1900);
}
