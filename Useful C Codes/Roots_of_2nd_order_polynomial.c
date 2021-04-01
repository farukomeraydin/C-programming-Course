#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	int a, b, c;
	printf("Enter the coefficients of a 2nd order polynomial: ");
	scanf("%d%d%d", &a, &b, &c);
	double delta = b * b - 4 * a * c;

	if (delta > 0) {
		double root_delta = sqrt(delta);
		printf("Root1 = %f\n", (-b - root_delta) / (2 * a));
		printf("Root2 = %f\n", (-b + root_delta) / (2 * a));
	}
	else if (delta == 0)
		printf("Root = %f\n", (double)-b / (2 * a));
	else
		printf("No reel root exists\n");
}
