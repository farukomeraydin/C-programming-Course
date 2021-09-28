#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	FILE* f;
	if ((f = fopen("test.txt", "r")) == NULL) {
		fprintf(stderr, "File cannot be opened\n");
		return 1;
	}
	printf("File is successfully opened\n");
}
