#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include <assert.h>

#define MAX_LINE_LEN	100

void random_shuffle(char** p, int size) {
	for (int i = 0; i < size; ++i)
	{
		int idx = rand() % size;
		if (idx != i) {
			char* ptemp = p[idx];
			p[idx] = p[i];
			p[i] = ptemp;
		}
			
	}
}

void write_to_file(char* pline, FILE* fd) {
	if (pline && *pline == '\n') {
		fprintf(fd, "\n");
		return;
	}

	char** pd = NULL;
	int word_count = 0;

	char* pword = strtok(pline, " \t\n");
	while (pword) {
		pd = realloc(pd, (word_count + 1) * sizeof(char*)); //In first loop it will behave like malloc
		pd[word_count++] = _strdup(pword);
		pword = strtok(NULL, " \t\n");
	}
	
	random_shuffle(pd, word_count);
	for (int i = 0; i < word_count; ++i) {
		fprintf(fd, "%s ", pd[i]);
		free(pd[i]);
	}
	
	fprintf(fd, "\n");
	free(pd);
}

void create_poem(const char* psource, const char* pdest) {
	
	char sline[MAX_LINE_LEN];
	FILE* fs = fopen(psource, "r");
	if (!fs) {
		fprintf(stderr, "%s file cannot open\n", psource);
		exit(EXIT_FAILURE);
	}
	FILE* fd = fopen(pdest, "w");
	if (!fd) {
		fprintf(stderr, "%s file cannot open\n", pdest);
		exit(EXIT_FAILURE);
	}

	while (fgets(sline, MAX_LINE_LEN, fs)) {
		write_to_file(sline, fd);
	}

	fclose(fs);
	fclose(fd);
}

//mpoem siir.txt 20
int main(int argc, char** argv)
{
	if (argc != 3) {
		fprintf(stderr, "usage <file name> <number of files>\n");
		return 1;
	}

	int n = atoi(argv[2]);
	for (int i = 1; i <= n; ++i){
		char filename[40];
		char* p = strrchr(argv[1], '.');
		assert(p != NULL);
		memcpy(filename, argv[1], p - argv[1]);
		_itoa(i, filename + (p - argv[1]), 10);
		strcat(filename, ".txt");
		create_poem(argv[1], filename);
	}
}
