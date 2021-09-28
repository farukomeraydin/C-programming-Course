#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include "Mytime.h"


int main(int argc, char* argv[])
{
	if (argc != 4) {
		fprintf(stderr, "usage: <which day><dd><mm><yyyy>\n");
		return 1;
	}
	Date x;
	set_date(&x, atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
	print_date(&x);
}
