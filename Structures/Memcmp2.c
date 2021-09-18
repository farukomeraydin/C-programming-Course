#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Data{
	char c1;
	int ival;
	char c2;
};

int main(void)
{
	struct Data d1;
	struct Data d2;

	memset(&d1, 0, sizeof(d1));
	memset(&d2, 0, sizeof(d2));

	d1 = (struct Data){ 12, 5698, 23 };
	d2 = (struct Data){ 12, 5698, 23 };

	if (!memcmp(&d1, &d2, sizeof(d1)))
		printf("Yes equal\n");
	else
		printf("Not equal\n");
}
