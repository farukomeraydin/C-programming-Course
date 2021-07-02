#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


#define SIZE 100

int main()
{
	char s1[SIZE];
	char s2[SIZE];

	printf("Enter the first string: ");
	sgets(s1);
	printf("Enter the second string: ");
	sgets(s2);

	int i = 0;
	int flag = 0;

	while (s1[i] == s2[i]) {
		if (s1[i] == '\0') {
			flag = 1;
			break;
		}
		++i;
	}

	if (flag)
		printf("Equal strings\n");
	else
		printf("Not equal\n");
}
