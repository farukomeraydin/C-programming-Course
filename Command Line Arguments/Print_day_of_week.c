#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main(int argc, char* argv[])
{
	if (argc != 4) {
		fprintf(stderr, "usage: <which day><dd><mm><yyyy>\n");
		return 1;
	}

	switch (day_of_the_week(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]))) {
	case 0: printf("Sunday\n"); break;
	case 1: printf("Monday\n"); break;
	case 2: printf("Tuesday\n"); break;
	case 3: printf("Wednesday\n"); break;
	case 4: printf("Thursday\n"); break;
	case 5: printf("Friday\n");  break;
	case 6: printf("Saturday\n"); break;
	}
}
