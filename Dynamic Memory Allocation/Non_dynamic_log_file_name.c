#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	char *p[10];
	for (int i = 0; i < 10; ++i) {
		p[i] = get_logfile_name();
		printf("Press a button\n");
		_getch();
	}

	for (int i = 0; i < 10; ++i)
		puts(p[i]);
}
