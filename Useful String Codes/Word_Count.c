#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


#define SIZE		100
#define INWORD		1
#define OUTWORD		0

int main()
{
	char str[SIZE];
	printf("Enter a string: ");
	sgets(str);
	printf("[%s]\n", str);
	int wordflag = OUTWORD;
	int word_cnt = 0;

	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (isspace(str[i]))
			wordflag = OUTWORD;
		else if (wordflag == OUTWORD) {
			++word_cnt;
			wordflag = INWORD;
		}
	}
	printf("Total %d words\n", word_cnt);
}
