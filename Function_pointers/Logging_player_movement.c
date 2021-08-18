#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable: 6031)
#include "Omer.h"

void moveup()
{
	printf("Character moved up!\n");
}

void movedown()
{
	printf("Character moved down!\n");
}

void moveleft()
{
	printf("Character moved left!\n");
}

void moveright()
{
	printf("Character moved right!\n");
}

void rotateright()
{
	printf("Character rotated right\n");
}

void rotateleft()
{
	printf("Character rotated left!\n");
}

void stop()
{
	printf("Character stopped!\n");
}

void (*fp[])(void) = { moveup, movedown, moveleft, moveright, rotateleft, rotateright, stop };


int main()
{
	randomize();

	for (;;) {
		fp[rand() % asize(fp)]();
		_getch();
	}
}
