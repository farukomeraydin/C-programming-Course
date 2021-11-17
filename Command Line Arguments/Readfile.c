#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(int argc, char** argv)
{
	if (argc != 2) {
		fprintf(stderr, "kullanim: <dyaz> <dosya ismi>\n");
		return 1;
	}

	FILE* f = fopen(argv[1], "r");
	if (!f) {
		fprintf(stderr, "%s named file couldn't be openned\n", argv[1]);
		return 2;
	}
	int c;
	while ((c = fgetc(f)) != EOF)
		putchar(c);

	fclose(f);
}
