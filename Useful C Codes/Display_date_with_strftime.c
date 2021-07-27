#define _CRT_SECURE_NO_WARNINGS
#pragma	warning(disable:6031) //Disabling warnings for scanf
#include "Omer.h"
#include <locale.h>

#define SIZE	100

int main()
{
	char *p = setlocale(LC_ALL, "english");
	if (!p) {
		printf("locale change didn't happen\n");
		return 1;
	}
	
	char buffer[SIZE];
	time_t timer;
	time(&timer);
	strftime(buffer, SIZE, "%d %A %B %Y", localtime(&timer));
	puts(buffer);
}
