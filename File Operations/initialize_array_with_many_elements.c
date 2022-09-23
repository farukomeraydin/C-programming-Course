#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	FILE* f1, * f2;
	if ((f1 = fopen("value.txt", "r")) == NULL) {
		fprintf(stderr, "File cannot be opened!\n");
		return -1;
	}
	
	if ((f2 = fopen("arrays.txt", "a")) == NULL){
		fprintf(stderr, "File cannot be created!\n");
		return -1;
	}

	fprintf(f2, "double array[] = {");
	while (!feof(f1)) {
		double d;
		(void)fscanf(f1, "%lf", &d);
		fprintf(f2, "%lff,", d);
	}
	fprintf(f2, "};\n");
	fclose(f1);
	fclose(f2);
	
	return 0;
}
