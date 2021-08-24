#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	100

int main(void)
{
	char str[SIZE];
	int cnt = 0;

	printf("Enter a string: ");
	sgets(str);

	char* p = strtok(str, "0123456789");
	while (p) {
		printf("[%02d] %s\n", ++cnt, p);
		p = strtok(NULL, "0123456789");
	}

}
