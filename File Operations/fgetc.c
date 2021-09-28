#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	FILE* f = fopen("Mytime.h", "r");
	if (!f) {
		printf(stderr, "File cannot be opened\n");
		return 1;
	}
	int c;

	while ((c = fgetc(f)) != EOF)
		putchar(c);
	fclose(f);
}
