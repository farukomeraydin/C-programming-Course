#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"


#define SIZE 100
int main()
{
	char str[SIZE];
	char buffer[SIZE];

	printf("Enter a string: ");
	sgets(str);
	printf("[%s]\n", str);

	int c;
	printf("Character which will be erased: ");
	c = getchar();

	int buffer_idx = 0;
	for (int i = 0; str[i] != '\0'; ++i)
		if (str[i] != c)
			buffer[buffer_idx++] = str[i];
	buffer[buffer_idx] = '\0';
	printf("[%s]\n", buffer);
}
