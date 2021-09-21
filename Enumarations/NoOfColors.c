#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

typedef enum {White, Blue, Green, Yellow, Red, Black, NoOfColors}Color;

int main(void)
{
	for (Color c = 0; c < NoOfColors; ++c)
		printf("%d\n", c);
}
