#define _CRT_SECURE_NO_WARNINGS
#pragma	warning(disable:6031) //Disabling warnings for scanf
#include "Omer.h"
#include <locale.h>

#define SIZE	20

int main()
{
	char *p = setlocale(LC_ALL, "turkish");
	if (!p) {
		printf("locale change didn't happen\n");
		return 1;
	}
	printf("Locale change did happen, new locale: (%s)\n", p);

	double d;

	printf("Enter a real/gerçek number: ");
	scanf("%lf", &d);
	printf("d = %f\n", d);
}
