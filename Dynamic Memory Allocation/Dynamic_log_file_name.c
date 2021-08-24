#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main(void)
{
	char *p[10];
	for (int i = 0; i < 10; ++i) {
		p[i] = get_logfile_name_dynamic_memory();
		printf("Press a button\n");
		_getch();
	}

	for (int i = 0; i < 10; ++i) {
		puts(p[i]);
		free(p[i]);
	}
}
