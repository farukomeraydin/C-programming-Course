#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

void cf_assert(const char* pa, const char* pf, int line) {
	fprintf(stderr, "ASSERTION FAILED! (%s) FILE %s LINE %d\n", pa, pf, line);
	abort();
}

#ifdef NDEBUG
	ASSERT(e)	(void)(0)
#else
#define ASSERT(e)	if(!(e))	\
						cf_assert(#e, __FILE__, __LINE__)
#endif

void func(int x) {
	ASSERT(x != 0);
}

int main()
{
	func(0);
}
