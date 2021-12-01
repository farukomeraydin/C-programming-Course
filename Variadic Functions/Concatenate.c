#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

char* concat(const char* p, ...) {
	va_list args;
	va_start(args, p);
	size_t len = strlen(p);
	const char* ptr;
	while ((ptr = va_arg(args, const char*)) != NULL) {
		len += strlen(ptr);
	}
	char* pd = (char*)malloc(len);
	if (!pd) {
		printf("Memory is insufficient\n");
		exit(EXIT_FAILURE);
	}
	va_start(args, p);
	strcpy(pd, p);
	while ((ptr = va_arg(args, const char*)) != NULL) {
		strcat(pd, ptr);
	}
	va_end(args);
	return pd;
}


int main()
{
	char s1[40];
	char s2[40];
	char s3[40];
	char s4[40];
	printf("Enter 4 strings: ");
	scanf("%s%s%s%s", s1, s2, s3, s4);

	char* pd = concat(s1, s2, s3, s4, "marcus", "kelly", NULL);
	printf("(%s)\n", pd);
	free(pd);
}
