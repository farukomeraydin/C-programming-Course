#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	FILE* f = fopen("ASCII.txt", "w");
	if (!f) {
		printf("File couldn't created\n");
		return 1;
	}

	for  (int i = 0;  i < 128; ++i)
	{
		if (iscntrl(i))
			fprintf(f, "0x%02X %3d  CONTROL CHARACTER\n", i, i);
		else
			fprintf(f, "%0x02X %3d %c\n", i, i, i);
	}

	fclose(f);
	
}


