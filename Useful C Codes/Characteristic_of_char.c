#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	int c;
	printf("Enter a character: ");
	c = getchar();
	printf("c = %d\n", c);

	if (isupper(c))
		printf("isupper ----> OK\n");
	else
		printf("isupper ----> NOT OK\n");
	if (islower(c))
		printf("islower ----> OK\n");
	else
		printf("islower ----> NOT OK\n");
	if (isalpha(c))
		printf("isalpha ----> OK\n");
	else
		printf("isalpha ----> NOT OK\n");
	if (isdigit(c))
		printf("isdigit ----> OK\n");
	else
		printf("isdigit ----> NOT OK\n");
	if (isalnum(c))
		printf("isalnum ----> OK\n");
	else
		printf("isalnum ----> NOT OK\n");
	if (isxdigit(c))
		printf("isxdigit ----> OK\n");
	else
		printf("isxdigit ----> NOT OK\n");
	if (ispunct(c))
		printf("ispunct ----> OK\n");
	else
		printf("ispunct ----> NOT OK\n");
	if (isspace(c))
		printf("isspace ----> OK\n");
	else
		printf("isspace ----> NOT OK\n");
	if (isblank(c))
		printf("isblank ----> OK\n");
	else
		printf("isblank ----> NOT OK\n");
	if (isprint(c))
		printf("isprint ----> OK\n");
	else
		printf("isprint ----> NOT OK\n");
	if (isgraph(c))
		printf("isgraph ----> OK\n");
	else
		printf("isgraph ----> NOT OK\n");
	if (iscntrl(c))
		printf("iscntrl ----> OK\n");
	else
		printf("iscntrl ----> NOT OK\n");
}
