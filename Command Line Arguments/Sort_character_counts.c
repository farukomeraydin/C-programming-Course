#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

typedef struct {
	int c;
	int cnt;
}Data;

int mycmp(const void* vp1, const void* vp2) {
	return ((const Data*)vp2)->cnt - ((const Data*)vp1)->cnt;
	/*Or like below*/
	/*if (((const Data*)vp1)->cnt > ((const Data*)vp2)->cnt)
		return -1;

	if (((const Data*)vp1)->cnt < ((const Data*)vp2)->cnt)
		return 1;

	return 0;*/
}


int main(int argc, char** argv)
{
	if (argc != 2) {
		printf("usage: <mycmp> <file name>\n");
		return 1;
	}
	FILE* f = fopen(argv[1], "r");
	if (f == NULL) {
		fprintf(stderr, "file cannot be opened\n");
		return 1;
	}

	Data a[26];
	for (int i = 0; i < 26; ++i) {
		a[i].cnt = 0; a[i].c = 'A' + i;
	}

	int c;
	while ((c = fgetc(f)) != EOF)
		if (isalpha(c))
			++a[toupper(c) - 'A'].cnt;

	fclose(f);
	qsort(a, 26, sizeof(*a), &mycmp);

	for (int i = 0; i < 26; ++i)
		if (a[i].cnt)
			printf("%c   %d\n", a[i].c, a[i].cnt);

}
