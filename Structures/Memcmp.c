#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Data{
	char c1;
	int ival;
	char c2;
};

int main(void)
{
	struct Data d1 = { 13, 98713, 45 };
	struct Data d2 = { 13, 98713, 45 };

	if (!memcmp(&d1, &d2, sizeof(d1)))
		printf("Yes equal\n");
	else
		printf("Not equal\n");
}
