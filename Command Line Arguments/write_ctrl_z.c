#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	FILE* f = fopen("aaa.txt", "wb");
	if (f == NULL) {
		printf("file cannot be opened\n");
		return 1;
	}
	for (int i = 0; i < 100; ++i)
		fputc(65, f);

	fputc(26, f);
	for (int i = 0; i < 100; ++i)
		fputc(90, f);

	fclose(f);
}
