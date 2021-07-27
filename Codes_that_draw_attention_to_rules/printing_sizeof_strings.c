#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	printf("%zu\n", sizeof "ali"); //4
	printf("%zu\n", strlen("ali"));	//3
	printf("%zu\n", sizeof ""); //1
	printf("%zu\n", strlen("")); //0
}
