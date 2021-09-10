#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include "Mytime.h"

#define	ESC		0x1B

int main(void)
{
	while (!_kbhit() || _getch() != ESC)
		display_current_time();

	printf("\nProgramme continues to run\n");
}
