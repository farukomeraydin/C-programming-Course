#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include "Myctype.h"


int main(void)
{
	int c;
	printf("Enter a character: ");
	c = getchar();

	if (_myc[c] & PUNCT)
		printf("Punctuation\n");
	else
		printf("Not punctuation\n");
}
