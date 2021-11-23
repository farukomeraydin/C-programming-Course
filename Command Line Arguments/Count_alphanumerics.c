#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(int argc, char** argv)
{
	if (argc != 2) {
		printf("usage: <asay> <filename>\n");
		return 1;
	}

	FILE* f = fopen(argv[1], "r");
	if (f == NULL) {
		fprintf(stderr, "file cannot be opened\n");
		return 1;
	}

	int cnt[26] = { 0 };
	int c;

	while ((c = fgetc(f)) != EOF)
		if (isalpha(c))
			++cnt[toupper(c) - 'A'];

	fclose(f);

	for (int i = 0; i < 26; ++i)
		if (cnt[i])
			printf("%c  %d\n", 'A' + i, cnt[i]);
}
