#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define UPPER	1
#define LOWER	2
#define DIGIT	4
#define XDIGIT	8
#define SPACE	16
#define PUNCT	32
#define PRINT	64
#define CONTROL	128

int main(void)
{
	for (int i = 0; i < 128; ++i) {
		unsigned int x = 0;
		if (isupper(i))
			x |= UPPER;
		if (islower(i))
			x |= LOWER;
		if (isdigit(i))
			x |= DIGIT;
		if (isxdigit(i))
			x |= XDIGIT;
		if (isspace(i))
			x |= SPACE;
		if (ispunct(i))
			x |= PUNCT;
		if (isprint(i))
			x |= PRINT;
		if (iscntrl(i))
			x |= CONTROL;

		if (i && i % 8 == 0)
			printf("\n");

		printf("0X%2X, ", x);
	}
}
