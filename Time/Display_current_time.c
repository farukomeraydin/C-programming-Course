#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main(void)
{
	time_t timer;
	time(&timer);
	struct tm* p = localtime(&timer);

	printf("(%s)\n", ctime(&timer));
	printf("(%s)\n", asctime(p));
}
