#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main(int argc, char* argv[])
{
	char command_entry[100];

	for (;;) {
		printf("Yes boss? > ");
		sgets(command_entry);
		if (!strcmp(command_entry, "done"))
			break;
		system(command_entry);
	}
}
