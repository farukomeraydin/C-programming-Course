#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void func(int x) {
	int a[x];
	for (int i = 0; i < x; ++i)
		a[i] = i;
	
	for (int i = 0; i < x; ++i)
		printf("%d ", a[i]);

	printf("\n");
}

int main()
{
	int ival;
	printf("Enter an integer: ");
	scanf("%d", &ival);

	func(ival);
}
