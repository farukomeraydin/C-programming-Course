#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	100

char* trim(char* p) {
	int i;
	for (i = 0; p[i] != '\0'; ++i)
		if (isalnum(p[i])) 
			break;

	char* ptemp = p + i;

	for (i = strlen(ptemp); i >= 0; --i)
		if (!isspace(ptemp[i-1])) {
			ptemp[i] = '\0';
			break;
		}

	return ptemp;
}

int main()
{
	char str[SIZE];
	printf("Enter a string: ");
	sgets(str);
	printf("[%s]\n", str);
	printf("[%s]\n", trim(str));
}

