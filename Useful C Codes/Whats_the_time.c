#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	int hour, n;

	printf("What's the time: ");
	scanf("%d", &hour);
	printf("\nEnter how much time has passed: ");
	scanf("%d", &n);
	printf("What will be the time after %d hours: ", n);
	printf("\nTime: %d\n", (hour + n) % 12);
}


