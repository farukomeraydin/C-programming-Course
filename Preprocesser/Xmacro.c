#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define XCOLOR X(BLUE) X(WHITE) X(RED) X(MAGENTA) X(YELLOW) X(GRAY)

enum Color {
#define X(a)	a,
	XCOLOR
#undef  X
};

const char* const pcolors[] = {
#define X(a)	#a,
	XCOLOR
#undef X
};

int main()
{
	enum Color c = WHITE;

	switch (c) {
#define X(a)	case a: printf(#a); break;
		XCOLOR
#undef X
	};
}
