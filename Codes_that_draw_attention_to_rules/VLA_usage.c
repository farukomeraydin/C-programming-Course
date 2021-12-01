#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void open_file(const char* p1, const char* p2){
    char fname[strlen(p1) + strlen(p2) + 1];
    strcat(strcpy(fname, p1), p2);
    
    FILE *f = fopen(fname, "w");
    //...
}

int main()
{

}
