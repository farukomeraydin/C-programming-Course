#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"
#include "Mytime.h"

#define INT		0
#define	DOUBLE	1
#define	CHAR	2
#define DATE	3

typedef struct {
	union {
		int ival;
		double dval;
		char c;
		Date date;
	};
	int type;
}Data;

void set_random_data(Data* p) {
	switch (rand() % 4) {
	case CHAR: p->type = CHAR; p->c = rand() % 26 + 'A'; break;
	case INT: p->type = INT; p->ival = rand(); break;
	case DOUBLE: p->type = DOUBLE; p->dval = (double)rand(); break;
	case DATE: p->type = DATE; random_date(&p->date); break;
	}
}

void print_data(const Data* p) {
	switch (p->type) {
	case CHAR: printf("(%c)\n", p->c); break;
	case INT: printf("(%d)\n", p->ival); break;
	case DOUBLE: printf("(%f)\n", p->dval); break;
	case DATE: print_date(&p->date); break;
	}
}

int main(void)
{
	randomize();
	Data dx;
	for (;;) {
		set_random_data(&dx);
		print_data(&dx);
		_getch();
		system("cls");
	}
}
