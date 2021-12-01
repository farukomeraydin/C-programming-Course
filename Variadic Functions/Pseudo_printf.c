#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

/*Psuedo printf*/
//Uu -> unsigned int
//Dd -> double
//iI -> int
//LI -> long
//pP -> pointer
void printfmt(const char* p, ...) {
	va_list args;
	va_start(args, p);

	while (*p) {
		switch (toupper(*p)) {
		case 'I': printf("%d\n", va_arg(args, int)); break;
		case 'L': printf("%ld\n", va_arg(args, long)); break;
		case 'D': printf("%f\n", va_arg(args, double)); break;
		case 'U': printf("%u\n", va_arg(args, unsigned)); break;
		case 'P': printf("%p\n", va_arg(args, void*)); break;
		}
		++p;
	}

	va_end(args);
}


int main()
{
	int x = 35;
	double d = 28.76;
	unsigned uval = 83743u;
	long lval = 356L;

	printfmt("iDuLP", x, d, uval, lval, (void*)&x);
}
