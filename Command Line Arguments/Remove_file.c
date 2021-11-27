#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main()
{
	if (remove("aaa"))
		printf("Delete process is unsuccessful\n");
	else
		printf("File deleted\n");
}
