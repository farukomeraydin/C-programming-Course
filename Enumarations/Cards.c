#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#ifdef BRIDGE
typedef enum Suit_ {
		Club,
		Diamond,
		Heart,
		Spade
}Suit;
#else
typedef enum Suit_ {
	Club,
	Diamond,
	Spade,
	Heart
}Suit;
#endif 

typedef enum {
	Two = 2, Three = 3, Four = 4, Five = 5, Six = 6, Seven = 7, Eight = 8, Nine = 9, Ten = 10, Jack = 10, Queen = 10, King =10, Ace =11
}Face;

typedef struct {
	Suit s;
	Face f;
}Card;

int main(void)
{
	
}
