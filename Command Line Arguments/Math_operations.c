#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main(int argc, char* argv[])
{
	if (argc != 4) {
		fprintf(stderr, "usage: <hes><op1><operator+-*/><op2>\n");
		return 1;
	}
	int op1 = atoi(argv[1]);
	int op2 = atoi(argv[3]);

	switch (*argv[2]) {
	case '+': printf("%d\n", op1 + op2); break;
	case '-': printf("%d\n", op1 - op2); break;
	case '/': 
		if (op2 == 0)
			printf("Cannot be divided by zero\n");
		else
			printf("%f\n", (double)op1 / op2);
		break;
	case '*': printf("%d\n", op1 * op2); break;
	default: printf("(%c) is an invalid operator\n", *argv[2]); break;
	}
}
