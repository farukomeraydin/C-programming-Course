#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main()
{
	FILE* f = tmpfile();
	if (!f) {
		fprintf(stderr, "Temporary file cannot be created\n");
		return 1;
	}
	randomize();
	int x;
	for (int i = 0; i < 10; ++i) {
		x = rand();
		fwrite(&x, sizeof(x), 1, f);
	}
	fseek(f, 0L, SEEK_SET);
	fread(&x, sizeof(x), 1, f);
	printf("x = %d\n", x);
	fclose(f);
}
