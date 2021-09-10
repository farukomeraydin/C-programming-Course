#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main(void)
{
	int min;

	printf("How many minutes after this moment: ");
	scanf_s("%d", &min);

	time_t timer;
	time(&timer);

	timer += min * 60;
	puts(ctime(&timer));
}
