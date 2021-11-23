#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	FILE* f = fopen("aaaaaa.txt", "rb");
	if (f == NULL) {
		printf("file cannot be opened\n");
		return 1;
	}
	int c;
	while ((c = fgetc(f)) != EOF)
		printf("%d ", c);
	fclose(f);
}
