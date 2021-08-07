#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

const char* p[] = {
		"Kamil", "Korhan", "Beril", "Turhan", "Ufuk", "Murathan", "Figen", "Malik", "Bulent", "Cengiz",
"Baran", "Nurullah", "Dilber", "Tuncer", "Recep", "Pelinsu", "Cihan", "Yesim", "Aziz", "Kazim",
"Afacan", "Tevfik", "Sumeyye", "Hande", "Aslihan", "Emine", "Temel", "Gulsah", "Hasan", "Gul",
"Soner", "Ayla", "Cuneyt", "Tekin", "Binnaz", "Emrecan", "Yasar", "Yilmaz", "Feraye", "Tugra",
"Melek", "Garo", "Yurdagul", "Tarik", "Derin", "Handan", "Aytac", "Petek", "Cem", "Aylin",
"Gursel", "Haldun", "Nazife", "Hulusi", "Sevilay", "Sabriye", "Gulden", "Tansel", "Ege", "Turgut",
"Cahit", "Berk", "Nazli", "Aykut", "Kayhan", "Cemre", "Murat", "Kunter", "Gunay", "Cahite",
"Nedim", "Metin", "Kerim", "Utku", "Cumhur", "Kurthan", "Poyraz", "Can", "Candan", "Hikmet",
"Izzet", "Perihan", "Tufan", "Zahide", "Samet", "Melih", "Hakan", "Ayse", "Refik", "Efe",
"Belgin", "Bilal", "Niyazi", "Fugen", "Melike", "Saadet", "Cemile", "Nahit", "Arda", "Ugur",
"Aynur", "Yasin", "Polat", "Naz", "Yusuf", "Gulsen", "Nazif", "Demir", "Egemen", "Necmi",
"Fazilet", "Celal", "Ismail", "Kamile", "Mahir", "Caner", "Suleyman", "Cezmi", "Diana", "Sadullah",
"Atif", "Huseyin", "Necmettin", "Devlet", "Sezen", "Hulya", "Necmiye", "Ece", "Julide", "Onat",
"Emre", "Sinem", "Teoman", "Irmak", "Cihat", "Adem", "Bilgin", "Muzaffer", "Suphi", "Pelin",
"Yalcin", "Kenan", "Atalay", "Akin", "Durmus", "Haluk", "Kelami", "Alparslan", "Busra", "Kasim",
"Durriye", "Tarcan", "Nihal", "Gizem", "Bilge", "Dilek", "Yasemin", "Fahri", "Furkan", "Papatya",
"Hakki", "Fadime", "Devrim", "Abdi", "Tayyip", "Yurdakul", "Zekai", "Nagehan", "Ata", "Naci",
"Mert", "Yelda", "Cebrail", "Rumeysa", "Beyhan", "Azize", "Cemil", "Sezer", "Beste", "Ciler",
"Enes", "Cahide", "Tayyar", "Cansu", "Burak", "Ediz", "Sefa", "Anil", "Alev", "Atil",
"Nefes", "Cetin", "Tansu", "Bora", "Sevim", "Sarp", "Fuat", "Kaya", "Zarife", "Tanju",
"Su", "Kerem", "Handesu", "Jade", "Halime", "Gurbuz", "Okan", "Azmi", "Sevda", "Leyla",
"Galip", "Alican", "Atakan", "Feramuz", "Efecan", "Osman", "Nihat", "Sefer", "Zerrin", "Binnur",
"Taner", "Kayahan", "Nalan", "Tonguc", "Kezban", "Kaan", "Abdulmuttalip", "Dost", "Deniz", "Refika",
"Tijen", "Umit", "Yunus", "Zahit", "Melisa", "Hulki", "Hilmi", "Edip", "Muslum", "Canan",
"Dogan", "Berivan", "Adnan", "Helin", "Fikret", "Derya", "Sidre", "Abdullah", "Billur", "Nurdan",
"Agah", "Engin", "Burhan", "Suheyla", "Esra", "Sadri", "Sezai", "Esen", "Askin", "Rupen",
"Ercument", "Birhan", "Ahmet", "Polathan", "Tayfun", "Mustafa", "Zubeyde", "Pakize", "Nevsin", "Naciye",
"Erdem", "Asim", "Orkun", "Sami", "Sade", "Demet", "Keriman", "Yavuz", "Mehmet", "Muhsin",
"Saniye", "Cesim", "Aydan", "Eda", "Hilal" ,"Burak", "Taylan", "Fedai", "Ilke", "Dogancan",	"Rezzan",
"Ozer", "Tacettin", "Nurettin", "Seyfettin", "Safiye", "Aydin", "Latife", "Sercan", "Benfero"
};

int main()
{
	char str[100];

	for (size_t i = 0; i < asize(p); ++i)
		if (!is_all_unique(p[i]))
			printf("%s ", p[i]);
}
