#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable: 6031 6054)
#include "Omer.h"

typedef int(*Fptest)(int);

const Fptest fpa[] = { &isupper, &islower, &isalpha, &isdigit, &isalnum, &isxdigit, &ispunct, &isprint, &isspace, &isblank, &isgraph, &iscntrl };
const char* const fpname[] = { "isupper", "islower", "isalpha", "isdigit", "isalnum", "isxdigit", "ispunct", "isprint", "isspace", "isblank", "isgraph", "iscntrl" };


int main()
{
	printf("Enter a character: ");
	int c = getchar();
	char fname_entry[40];
	printf("Test function name: ");
	scanf("%s", fname_entry);

	size_t i;
	for (i = 0; i < asize(fpname) && strcmp(fname_entry, fpname[i]); ++i)
		;
	if (i == asize(fpname))
		printf("Entered function name doesn't exists\n");
	else if (fpa[i](c))
		printf("In %s function return value for (%c) character is true\n", fname_entry, c);
	else
		printf("In %s function return value for (%c) character is false\n", fname_entry, c);

}
