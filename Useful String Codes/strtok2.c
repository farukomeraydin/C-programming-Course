#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	100

int main()
{
	char str[SIZE];
	printf("Enter a string: ");
	sgets(str);
	int cnt = 0;

	printf("(%s)\n", str);
	char* p = strtok(str, " \t\n"); //space tab character and new line are delimeters
	while (p) {
		printf("[%2d] %s\n", ++cnt, p);
		p = strtok(NULL, " \t\n");
	}

}
