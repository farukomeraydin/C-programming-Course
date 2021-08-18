#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	char* p[] = {
	"kamil", "korhan", "beril", "turhan", "ufuk", "murathan", "figen", "malik", "bulent", "cengiz",
	"baran", "nurullah", "dilber", "tuncer", "recep", "pelinsu", "cihan", "yesim", "aziz", "kazim",
	"afacan", "tevfik", "sumeyye", "hande", "aslihan", "emine", "temel", "gulsah", "hasan", "gul",
	"soner", "ayla", "cuneyt", "tekin", "binnaz", "emrecan", "yasar", "yilmaz", "feraye", "tugra",
	"melek", "garo", "yurdagul", "tarik", "derin", "handan", "aytac", "petek", "cem", "aylin",
	"gursel", "haldun", "nazife", "hulusi", "sevilay", "sabriye", "gulden", "tansel", "ege", "turgut",
	"cahit", "berk", "nazli", "aykut", "kayhan", "cemre", "murat", "kunter", "gunay", "cahite",
	"nedim", "metin", "kerim", "utku", "cumhur", "kurthan", "poyraz", "can", "candan", "hikmet",
	"izzet", "perihan", "tufan", "zahide", "samet", "melih", "hakan", "ayse", "refik", "efe",
	"belgin", "bilal", "niyazi", "fugen", "melike", "saadet", "cemile", "nahit", "arda", "ugur" };

	display_names(p, asize(p));
	sort_names(p, asize(p));
	display_names2(p, asize(p));
}
