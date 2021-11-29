#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

/*
We might want to transfer standard output to somewhere else like a text file.
However, error messages concern only users. If we use printf for error messages,
they will also be transferred. As a default, error stream is represented by 
stderr. Even if we transfer output, error messages will stay.
*/

int main()
{
	fprintf(stderr, "There is an ERROR!!");
}
