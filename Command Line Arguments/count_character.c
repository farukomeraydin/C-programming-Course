#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(int argc, char** argv)
{
	if (argc != 3) {
		printf("usage: <csay> <filename> <character>\n");
		return 1;
	}

	FILE* f = fopen(argv[1], "r");
	if (f == NULL) {
		fprintf(stderr, "file cannot be opened\n");
		return 1;
	}
	int c;
	int cnt = 0;

	while ((c = fgetc(f)) != EOF)
		if (c == *argv[2])
			++cnt;
	fclose(f);
	printf("%d\n", cnt);
}
