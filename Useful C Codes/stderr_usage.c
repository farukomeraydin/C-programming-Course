#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

/*
On the console, you will see the standard output and error message.
However, if you execute "deneme.exe error > aaa.txt" command, standard
output will be transferred to aaa.txt and error message will stay.
*/

int main()
{
	for (int i = 0; i < 50; ++i)
		printf("%s ", random_name());

	fprintf(stderr, "\nThere is an error!");
}
