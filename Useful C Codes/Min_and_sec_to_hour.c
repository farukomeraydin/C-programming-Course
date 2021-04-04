#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	int min, sec;
	printf("Enter minute and second respectively: ");
	scanf("%d%d", &min, &sec);

	printf("%d minutes and %d seconds yields %f hours\n", min, sec, min / 60. + sec / 3600.);
	return 0;
}
