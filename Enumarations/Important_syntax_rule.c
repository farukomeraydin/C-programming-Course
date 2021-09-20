#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

typedef enum Color {
	White, Blue, Green, Yellow, Red, Black,
}Color;

typedef enum Pos {
	On, Off, Hold, Standby
}Pos;

int main(void)
{
	//Be careful there is no syntax error for this
	Color mycolor = Red;
	printf("%d\n", mycolor);
	mycolor = 45;
	printf("%d\n", mycolor);
	mycolor = Standby;
	printf("%d\n", mycolor);
}
