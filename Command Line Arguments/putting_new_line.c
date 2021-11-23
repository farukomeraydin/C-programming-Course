#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	FILE* f = fopen("aaaaaa.txt", "w");
	if (f == NULL) {
		printf("file cannot be opened\n");
		return 1;
	}
	
	for (int i = 0; i < 100; ++i)
		fputc('\n', f);
	fclose(f);
}
