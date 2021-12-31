#ifndef OMER_INCLUDED
#define OMER_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#include <stdarg.h>

#define   URAND_MAX      20

#define isleap(y)	((y) % 4 == 0 && ((y) % 100 != 0 || (y) % 400 == 0))	//Leap year check
#define asize(x)	(sizeof(x) / sizeof(x[0]))	//Size of an array
#define isupper(c)	((c)>='A'&&(c)<='Z')	//isupper macro
#define max2(a, b)	((a) > (b) ? (a) : (b))	//max macro
#define Macroclamp(a,low,high)	((a)<(low)?(low):((high)<(a))?(high):(a)))	//clamp macro
#define Macroswap(a, b)   {int temp = a; a = b; b = temp;}	//swap macro
#define iprint(x)    printf(#x " = %d\n", x)	//print macro
#define powof2(x)  ((x) && !((x) & ((x) - 1)))	//Is x power of 2?
#define  econ32(x)  ((x >> 24 & 0xFF) | (x << 24) | (x >> 8 & 0x0000FF00) | (x << 8 & 0x00FF0000))	//Little-big Endian conversion for 32-bits number
#define generate_max_function(t)   t maxarray_##t(const t *ptr, int size) \
{  \
	t max = *ptr;  \
	for (int i = 1; i < size; ++i) \
		if (ptr[i] > max) \
			max = ptr[i]; \
	return max; \
} //Independent from data type of array, finds the max element
#define gsmf(s)    void set_matrix_##s(int(*p)[s], size_t size) \
{ \
	for (size_t i = 0; i < size; ++i) { \
		for (int k = 0; k < s; ++k) { \
			p[i][k] = rand() % 10; \
		} \
	} \
}//This macro allows you to set a matrix that has your choice of array size for each dimension

#define  gdmf(s)    void display_matrix_##s(const int(*p)[s], size_t size) \
{ \
for (size_t i = 0; i < size; ++i) { \
	for (int k = 0; k < s; ++k) { \
		printf("%3d ", p[i][k]); \
	} \
	printf("\n"); \
}\
sl(); \
}//This macro allows you to display a matrix that has your choice of array size for each dimension

int isprime(int val);
int ndigit(int val);	//Finds how many digit a number has
void sl(void);
void sleep(double sec);	//delay function
void swap(int* p1, int* p2);
int day_of_the_week(int d, int m, int y);
void randomize(void);
char* sgets(char* p);
void display_array(const int* ptr, size_t size);
void set_random_array(int* ptr, size_t size);
void bsort(int* p, size_t size);
int max3(int, int, int);
int sum_digit(int);
int power(int, int);
int getmid(int, int, int);
int isarmstrong(int);
int iseven(int);
int isodd(int);
int clamp(int, int, int);
int is_in_range(int, int, int);
int isperfect(int);
void delay(double);
int urand(void);
int urand2(void);
int fibo_r(int);	//recursive fibonacci function
int fibo_i(int);	//iterative fibonacci function
int fibo_l(int);	//Look-up fibonacci function
int factorial(int);
void print_random_psw(void);	//Generates a random password
int urand(void);	//Unique random function
int icmp(const void*, const void*);	//Compare function for sorting
int dcmp(const void*, const void*);
void sort_array(int*, int);
double get_circle_area(double);
int sum_array(const int*, int);
double get_mean(const int*, int);
double get_std_dev(const int*, int);
void reverse_array(int*, int);
void reverse_array2(int*, int);
void copy_array(int*, const int*, int);
void reverse_copy_array(int*, const int*, int);
void reverse_copy(int*, const int*, int);
void get_minmax(const int*, int, int*, int*);
void display_array2(const int*, const int*);
void reverse_array3(int*, int);
void reverse_display_array(const int*, int);
int get_array_max(const int*, int);
int* get_array_max2(const int*, int);
int* get_array_min(const int*, int);
void selection_sort(int*, int);
int* search(const int*, size_t, int);
int get_random_char(void);
/*---------------STRING FUNCTIONS*-------------------*/
void myputs(const char*);
void rputs1(const char*);	//Reverse puts function
void rputs2(const char*);
size_t strlen1(const char*);	//My strlen functions
size_t strlen2(const char*);
size_t strlen3(const char*);
char* strchr1(const char*, int);	//My strchr function
char* strcpy1(char*, const char*);	//My strcpy functions
char* strcpy2(char*, const char*);	
char* strcat1(char*, const char*);	//My strcat functions
char* strcat2(char*, const char*);
char* strcat3(char*, const char*);
char* strrchr1(const char*, int);
int is_at_end(const char*, const char*);	//Check if a string is at the end of another string (e.g "Racecar" and "car")
char* strpbrk1(const char*, const char*);	//My strpbrk function
int stricmp1(const char*, const char*);	//My stricmp function (Case insensitive)
int strcmp1(const char*, const char*);	//My strcmp function
const char* get_day_name(int);
int get_hexchar(int);
int get_hexchar2(int);
int is_all_unique(const char*);
void print(int);	//Prints number as a string (Zero is exception)
void sort1(char*);	//Lexicographic sort
void sort2(char*);	//Reverse lexicographic sort
char* create_random_psw1(char*);
char* create_random_psw2(void);
char* trim(char* p);
/*-----------------------POINTER TO POINTER Functions---------------------------------*/
void pswap(int**, int**);
void cpswap(char**, char**);
void sort_names(char**, size_t);
void display_names(char* const*, size_t);
void display_names2(char**, size_t);
const char* random_name(void);
/*---------------------Mem Functions-----------------------*/
void gswap(void*, void*, size_t);	//Generic swap
void* memset1(void*, int, size_t);	//My memset function
void* memcpy1(void* vpdest, const void* vpsource, size_t n);	//My memcpy function
void* memmove_(void*, const void*, size_t);	//My memmove function
char* str_prepend(char*, const char*);
void* memchr1(const void* vp, int val, size_t n);	//My memchr function
int memcmp1(const void*, const void*, size_t);	//My memcmp function
void* greverse(void*, size_t, size_t);
void* greverse2(void*, size_t, size_t);
void* gsearch(const void*, size_t, size_t, const void*);
void* gsearch2(const void*, size_t, size_t, const void*);
void fdisplay(const char*, int(*)(int));	//Prints the values that function returns true
void gsort(void*, size_t, size_t, int(*)(const void*, const void*));
int scmp(const void*, const void*);
/*----------------------Multidimensional Arrays--------------------*/
void set_matrix_12(int(*)[12], size_t);
void set_matrix_8(int(*)[8], size_t);
void set_matrix_20(int(*)[20], size_t);
void display_matrix_12(const int(*)[12], size_t);
void display_matrix_8(const int(*)[8], size_t);
void display_matrix_20(const int(*)[20], size_t);
void set_random_matrix(int*, size_t, size_t);
void display_matrix(const int*, size_t, size_t);
void set_random_matrix2(void*, size_t, size_t);
void display_matrix2(const void*, size_t, size_t);
void swap_str(char*, char*);	//Swaps strings
/*---------------Dynamic Memory Management----------------*/
char* strdup2(const char*);	//My strdup function
char* strcon(const char*, const char*);	//Concatenate function
char* create_random_psw3(void);
/*-----------------------Bitwise Operation---------------*/
void bprint(int);	//Prints the number as binary
void bprint2(int);
void bprint3(int);
void shift_right(void);
void shift_left(void);
int sbc(int);	//Counts set bits
/*-----------------------File Operations------------------------*/
char* get_logfile_name(void);
char* get_logfile_name_dynamic_memory(void);
void print_cset(const char*);	//Creates the file that has every character in it.
void clear_input_buffer(void);
/*-----------------------Variadic Functions------------*/
double get_mean_variadic(int n, ...);
void printfmt(const char* p, ...);
char* concat(const char* p, ...);
int get_max(int n, ...);
#endif

