#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int x = 10;
	int y = 97;
	int *p1 = &x;
	int *p2 = &y;

	printf("%d    %d\n", *p1, *p2);
	//Instead of doing this
	/*int *ptemp = p1;
	p1 = p2;
	p2 = ptemp;*/
	
	pswap(&p1, &p2);	//Do this
	printf("%d    %d\n", *p1, *p2);
}
