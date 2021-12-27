#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define   SIZE      100

void swap_char(char* p1, char* p2) {
	char temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void reverse_string(char* p, int size)
{
	char* pe = p + size;
	int n = size / 2;

	while (n--)
		swap_char(p++, --pe);
}

int main()
{
    char str[SIZE];
    printf("Enter two words\n");
    sgets(str);
	int blank_idx = 0;
	reverse_string(str, strlen(str));
	printf("%s\n", str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ') {
			blank_idx = i;
			break;
		}
	}
	printf("%d\n", blank_idx);

	reverse_string(str + blank_idx+1, strlen(str + blank_idx+1));
	reverse_string(str, blank_idx);
	printf("%s\n", str);
}

