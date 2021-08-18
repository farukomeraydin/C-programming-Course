#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define MAX_AT_EXIT		10
typedef void(*FCLEANUP)(void);
static FCLEANUP ga[MAX_AT_EXIT];
static int gcount = 0;

void Exit(void) {
	printf("As a exit function I call the functions that are logged\n");

	for (int i = gcount - 1; i >= 0; --i)
		ga[i]();
}

int AtExit(FCLEANUP fp) {
	if (gcount == MAX_AT_EXIT)
		return 1;

	ga[gcount++] = fp;
	return 0;
}

int main()
{
	return 0;
}
