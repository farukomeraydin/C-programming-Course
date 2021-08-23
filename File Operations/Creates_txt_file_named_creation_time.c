#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	FILE* f = fopen(get_logfile_name(), "w");
	fclose(f);
}
