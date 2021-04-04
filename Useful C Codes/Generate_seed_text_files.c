#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	char filename[100];
	for (int i = 1; i < 100; ++i) {
		sprintf(filename, "seed%03d.txt", i);
		FILE* f = fopen(filename, "w");
		if (!f) {
			printf("File couldn't created\n");
			return 1;
		}
		srand(i);
		for (int k = 0; k < 2000; ++k) {
			fprintf(f, "%-5d%c", rand(), k % 10 == 9 ? '\n' : ' ');
		}
		fclose(f);
	}
}
