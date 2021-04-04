#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	double d;
	printf("Enter a reel number between the[-10, 10] interval: ");
	scanf("%lf", &d);
	printf("%d\n", (int)((d > 0 ? .5 : -.5) + d));
	return 0;
}
