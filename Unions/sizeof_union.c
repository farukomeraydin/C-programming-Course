#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

typedef struct {
	int mx, my, mz;
	double d1, d2;
	char s[12];
}STRUCT;

typedef union {
	int mx, my, mz;
	double d1, d2;
	char s[12];
}UNION;

int main(void)
{
	printf("sizeof(STRUCT) = %zu\n", sizeof(STRUCT));
	printf("sizeof(UNION) = %zu\n", sizeof(UNION));
}
