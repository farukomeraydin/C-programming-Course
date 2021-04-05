#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int isprime(int val) {
	if (val == 0 || val == 1)
		return 0;
	if (val % 2 == 0)
		return val == 2;
	if (val % 3 == 0)
		return val == 3;
	if (val % 5 == 0)
		return val == 5;
	for (int k = 7; k * k <= val; k += 2)
		if (val % k == 0)
			return 0;
	return 1;
}

int ndigit(int val) {
	if (val == 0)
		return 1;
	int digit_count = 0;
	while (val) {
		++digit_count;
		val /= 10;
	}
	return digit_count;
}

void sl(void) {
	printf("\n----------------------------------------\n");
}

void sleep(double sec) {
	clock_t start = clock();
	while ((double)(clock() - start) / CLOCKS_PER_SEC < sec)
		;
}

void swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int day_of_the_week(int d, int m, int y) {	//Sakamoto Algorithm
	static const int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };

	// if month is less than 3 reduce year by 1 
	if (m < 3)
		y -= 1;

	return ((y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7);
}

void randomize(void) {
	srand((unsigned)time(NULL));
}

char* sgets(char* p) {
	int c;
	char* ptemp = p;
	while ((c = getchar()) != '\n')
		*p++ = c;
	*p = '\0';
	return ptemp;
}

void display_array(const int* ptr, size_t size) {
	for (size_t i = 0; i < size; ++i)
	{
		printf("%3d%c", ptr[i], i % 20 == 19 ? '\n' : ' ');
	}
	sl();
}

void set_random_array(int* ptr, size_t size) {
	while (size--)
		*ptr++ = rand() % 1000;
}

void bsort(int* p, size_t size) {
	for (size_t i = 0; i < size - 1; ++i)
		for (size_t k = 0; k < size - 1; ++k)
			if (p[k] > p[k + 1])
				swap(p + k, p + k + 1);
}

int max3(int a, int b, int c)
{
	int max = a;

	if (b > max)
		max = b;

	if (c > max)
		max = c;

	return max;
}

int sum_digit(int x)
{
	int sum = 0;

	while (x != 0) {
		sum += x % 10;
		x /= 10;
	}

	return sum;
}

int power(int base, int exp)
{
	int result = 1;

	while (exp--)
		result *= base;

	return result;
}

int getmid(int a, int b, int c)
{
	if (!(a > b && a > c || a < b && a < c))
		return a;

	if (!(b > a && b > c || b < a && b < c))
		return b;

	return c;
}

int isarmstrong(int val)
{
	int n = ndigit(val);

	int temp = val;
	int sum = 0;
	while (temp) {
		sum += power(temp % 10, n);
		temp /= 10;
	}

	return sum == val;
}

int iseven(int x)
{
	return x % 2 == 0;
}

int isodd(int x) {
	return x & 1;
}

int clamp(int v, int low, int high)
{
	return (v < low) ? low : (high < v) ? high : v;
}

int is_in_range(int v, int low, int high)
{
	return v >= low && v <= high;
}

int isperfect(int x)
{
	int divsum = 0;

	for (int i = 1; i <= x / 2; ++i)
		if (x % i == 0)
			divsum += i;

	return x == divsum;
}

void delay(double sec)
{
	clock_t start = clock();

	while ((double)(clock() - start) / CLOCKS_PER_SEC < sec)
		;
}

int fibo_r(int n)
{
	return n < 2 ? n : fibo_r(n - 1) + fibo_r(n - 2);
}

int fibo_i(int n)
{

	if (n < 2)
		return n;

	int a = 0, b = 1, c, i;

	for (i = 1; i < n; ++i) {
		c = a + b;
		a = b;
		b = c;
	}

	return c;

}


int fibo_l(int n) {
	const static int a[] = {
	0,
1,
1,
2,
3,
5,
8,
13,
21,
34,
55,
89,
144,
233,
377,
610,
987,
1597,
2584,
4181,
6765,
10946,
17711,
28657,
46368,
75025,
121393,
196418,
317811,
514229,
832040,
1346269,
2178309,
3524578,
5702887,
9227465,
14930352,
24157817,
39088169,
63245986,
102334155,
165580141,
267914296,
433494437,
701408733,
1134903170,
1836311903,
	};

	return a[n];
}

int factorial(int n)
{
	int result = 1;
	int i;
	for (i = 1; i <= n; ++i) {
		result *= i;
	}

	return result;
}

void print_random_psw(void)
{
	randomize();
	int c;
	int n = rand() % 8 + 5;
	for (int i = 0; i < n; ++i) {
		while (!isalnum(c = rand() % 128))
			;
		printf("%c", c);
	}
	printf("\n");
}

int urand(void)
{
	static int flags[URAND_MAX] = { 0 };
	static int cnt = 0;

	if (cnt == URAND_MAX)
		return -1;

	int val;

	while (flags[val = rand() % URAND_MAX])
		;

	++cnt;
	flags[val] = 1;

	return val;
}

int urand2(void) {
	static int flags[URAND_MAX] = { 0 };
	static int cnt = 0;
	if (cnt == URAND_MAX) {
		cnt = 0;
		memset(flags, 0, URAND_MAX * sizeof(int));
	}
	int val;
	while (flags[val = rand() % URAND_MAX])
		;
	++cnt;
	flags[val] = 1;
	return val;
}

void sort_array(int* p, int size)
{
	qsort(p, size, sizeof(*p), &icmp);
}

double get_circle_area(double radius)
{
	return 3.1415926 * radius * radius;
}

int sum_array(const int* p, int size)
{
	int sum = 0;

	while (size--) {
		sum += *p;
		++p;
	}

	return sum;
}

double get_mean(const int* p, int size)
{
	return (double)sum_array(p, size) / size;
}

double get_std_dev(const int* p, int size)
{
	double mean = get_mean(p, size);
	double sum_square = 0.;

	for (int i = 0; i < size; ++i)
		sum_square += (p[i] - mean) * (p[i] - mean);

	return sqrt(sum_square / size);
}

void reverse_array(int* p, int size)
{
	int* pe = p + size;
	int n = size / 2;

	while (n--)
		swap(p++, --pe);
}


void reverse_array2(int* p, int size)
{
	for (int i = 0; i < size / 2; ++i) {
		//swap(p + i, p + size - 1 - i);
		//swap(&p[i], &p[size - 1 - i]);
		int temp = p[i];
		p[i] = p[size - 1 - i];
		p[size - 1 - i] = temp;
	}
}


void copy_array(int* pdest, const int* psource, int size)
{
	while (size--) {
		//*pdest++ = *psource++;
		*pdest = *psource;
		++pdest;
		++psource;
	}
}

void reverse_copy_array(int* pdest, const int* psource, int size)
{
	int* pe = pdest + size;

	while (size--) {
		//*--pe = *psource++;
		--pe;
		*pe = *psource;
		++psource;
	}
}
void get_minmax(const int* pa, int size, int* pmax, int* pmin)
{
	*pmax = *pmin = *pa;

	for (int i = 1; i < size; ++i)
		if (pa[i] > *pmax)
			*pmax = pa[i];

		else if (pa[i] < *pmin)
			*pmin = pa[i];

}

void display_array2(const int* ps, const int* pe)
{
	while (ps != pe) {
		printf("%3d ", *ps);
		++ps;
	}
	printf("\n----------------------------------------------\n");
}

void reverse_array3(int* p, int size)
{
	int* pe = p + size;

	while (p < pe)
		swap(p++, --pe);
}

void reverse_display_array(const int* p, int size)
{
	p += size;
	while (size--)
		printf("%3d ", *--p);

	printf("\n");

}

int get_array_max(const int* p, int size)
{
	int max = *p;

	for (int i = 1; i < size; ++i) {
		if (p[i] > max)
			max = p[i];
	}

	return max;
}

int* get_array_max2(const int* ptr, int size)
{
	const int* pmax = ptr;

	for (int i = 1; i < size; ++i) {
		if (ptr[i] > *pmax)
			pmax = ptr + i;
		//pmax = &ptr[i];
	}

	return (int*)pmax;
}

int* get_array_min(const int* ptr, int size)
{
	const int* pmin = ptr;

	for (int i = 1; i < size; ++i) {
		if (ptr[i] < *pmin)
			pmin = ptr + i;
		//pmin = &ptr[i];
	}

	return (int*)pmin;
}

void selection_sort(int* p, int size)
{
	for (int i = 0; i < size - 1; ++i) {
		swap(p + i, get_array_min(p + i, size - i));
	}
}

int* search(const int* p, size_t size, int val) {
	while (size--) {
		if (*p == val)
			return (int*)p;
		++p;
	}
	return NULL;
}

void myputs(const char* p) {
	while (*p != '\0')
		putchar(*p++);
	putchar('\n');
}

void rputs1(const char* p)
{
	for (size_t i = strlen(p); i; )
		putchar(p[--i]);
	putchar('\n');
}

void rputs2(const char* p)
{
	const char* pe = p + strlen(p);

	while (pe != p)
		putchar(*--pe);

	putchar('\n');
}

size_t strlen1(const char* p)
{
	size_t len = 0;

	for (; p[len] != '\0'; ++len)
		;

	return len;
}

size_t strlen2(const char* p)
{
	size_t len = 0;

	while (*p++)
		++len;

	return len;
}

size_t strlen3(const char* p)
{
	const char* pe = p;

	while (*pe)
		++pe;

	return (size_t)(pe - p);
}

char* strchr1(const char* p, int c)
{
	while (*p) {
		if (*p == c)
			return (char*)p;
		++p;
	}

	if (c == '\0')
		return (char*)p;

	return NULL;
}

char* strcpy1(char* pdest, const char* psource)
{
	char* ptemp = pdest;

	while (*pdest++ = *psource++)
		;

	return ptemp;
}

char* strcpy2(char* pdest, const char* psource)
{
	char* ptemp = pdest;

	while (*psource != '\0') {
		*pdest++ = *psource++;
	}
	*pdest = '\0';
	return ptemp;
}

char* strcat1(char* pdest, const char* psource)
{
	char* ptemp = pdest;

	while (*pdest)
		++pdest;

	while (*pdest++ = *psource++)
		;

	return ptemp;
}

char* strcat2(char* pdest, const char* psource)
{
	strcpy(pdest + strlen(pdest), psource);

	return pdest;
}

char* strcat3(char* pdest, const char* psource)
{
	strcpy(strchr(pdest, '\0'), psource);

	return pdest;
}

int is_at_end(const char* p1, const char* p2)
{
	size_t lenp1 = strlen(p1);
	size_t lenp2 = strlen(p2);
	if (lenp2 > lenp1)
		return 0;

	return !strcmp(p1 + lenp1 - lenp2, p2);	
}

char* strpbrk1(const char* p1, const char* p2)
{
	while (*p1 != '\0') {
		if (strchr(p2, *p1))
			return (char*)p1;
		++p1;
	}
	return NULL;
}

int stricmp1(const char* p1, const char* p2)
{
	while (toupper(*p1) == toupper(*p2)) {
		if (*p1 == '\0')
			return 0;
		++p1;
		++p2;
	}

	return toupper(*p1) - toupper(*p2);
}

int strcmp1(const char* p1, const char* p2)
{
	while (*p1 == *p2) {
		if (*p1 == '\0')
			return 0;
		++p1;
		++p2;
	}

	return *p1 - *p2;
}

const char* get_day_name(int weekday)
{
	switch (weekday) {
	case 1: return "pazartesi";
	case 2: return "sali";
	case 3: return "carsamba";
	case 4: return "persembe";
	case 5: return "cuma";
	case 6: return "cumartesi";
	case 7: return "pazar";
	}

	return NULL;
}

int get_hexchar(int val)
{
	return "0123456789ABCDEF"[val];
}

int get_hexchar2(int val)
{
	if (val < 10)
		return '0' + val;

	return val - 10 + 'A';
}

int is_all_unique(const char* p)
{
	if (!*p)
		return 1;

	for (int i = 0; p[i] != '\0'; ++i)
		for (int k = i + 1; p[k] != '\0'; ++k)
			if (p[k] == p[i])
				return 0;


	return 1;
}

void print(int ival)
{
	if (ival < 0) {
		ival = -ival;
		putchar('-');
	}

	if (ival)
		print(ival / 10);
	else
		return;


	putchar(ival % 10 + '0');
}

void pswap(int** ptr1, int** ptr2)
{
	int* ptemp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = ptemp;
}

void cpswap(char** p1, char** p2)
{
	char* ptemp = *p1;
	*p1 = *p2;
	*p2 = ptemp;
}

void sort_names(char** ptr, size_t size)
{
	for (size_t i = 0; i < size - 1; ++i) {
		for (size_t k = 0; k < size - 1 - i; ++k) {
			if (strcmp(ptr[k], ptr[k + 1]) > 0)
				cpswap(ptr + k ,ptr + k + 1);
		}
	}
}


void display_names(char* const* ptr, size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		printf("%s ", ptr[i]);
	}
	printf("\n\n");
}


void display_names2(char** ptr, size_t size)
{
	while (size--) {
		printf("%s ", *ptr++);

	}
	printf("\n\n");

}

void gswap(void* vp1, void* vp2, size_t n)
{
	char* p1 = (char*)vp1;
	char* p2 = (char*)vp2;

	while (n--) {
		char temp = *p1;
		*p1++ = *p2;
		*p2++ = temp;
	}
}

void* memset1(void* vp, int val, size_t n)
{
	//unsigned char *p = vp;
	unsigned char* p = (unsigned char*)vp;
	while (n--)
		*p++ = (unsigned char)val;

	return vp;
}

void* memcpy1(void* vpdest, const void* vpsource, size_t n)
{
	char* pdest = (char*)vpdest;
	const char* psource = (const char*)vpsource;

	while (n--)
		*pdest++ = *psource++;

	return vpdest;
}

void* memmove_(void* vpdest, const void* vpsource, size_t n)
{
	char* pdest = (char*)vpdest;
	const char* psource = (const char*)vpsource;

	if (pdest < psource) {
		while (n--)
			*pdest++ = *psource++;
	}
	else {
		pdest += n;
		psource += n;
		while (n--)
			*--pdest = *--psource;
	}

	return vpdest;
}

char* str_prepend(char* pdest, const char* psource)
{
	size_t source_len = strlen(psource);
	size_t dest_len = strlen(pdest);

	memmove(pdest + source_len, pdest, dest_len + 1);
	memmove(pdest, psource, source_len);

	return pdest;
}

void* memchr1(const void* vp, int val, size_t n)
{
	const unsigned char* p = (const unsigned char*)vp;

	while (n--) {
		if ((unsigned char)val == *p)
			return (unsigned char*)p;
		++p;
	}
	return NULL;
}

int memcmp1(const void* vp1, const void* vp2, size_t n)
{
	const unsigned char* p1 = (const unsigned char*)vp1;
	const unsigned char* p2 = (const unsigned char*)vp2;


	while (n--) {
		if (*p1 != *p2)
			return *p1 > *p2 ? 1 : -1;
		++p1;
		++p2;
	}

	return 0;
}

void* greverse(void* vpa, size_t size, size_t width)
{
	char* p = (char*)vpa;

	for (size_t i = 0; i < size / 2; ++i) {
		gswap(p + i * width, p + (size - 1 - i) * width, width);
	}

	return vpa;
}

void* greverse2(void* vpa, size_t size, size_t width)
{
	char* p = (char*)vpa;
	char* plast = p + (size - 1) * width;

	while (p < plast) {
		gswap(p, plast, width);
		p += width;
		plast -= width;
	}
	return vpa;
}

void *gsearch(const void *vpa, size_t size, size_t width, const void *vpkey)
{
	const char *p = (const char*)vpa;

	while (size--) {
		if (!memcmp(p, vpkey, width))
			return (char *)p;
		p += width;
	}

	return NULL;

}

void* gsearch2(const void* vpa, size_t size, size_t width, const void* vpkey)
{
	const char* p = (const char*)vpa;

	for (size_t i = 0; i < size; ++i) {
		if (!memcmp(p + i * width, vpkey, width))
			return (char*)(p + i * width);
	}

	return NULL;
}

void fdisplay(const char* p, int(*fp)(int))
{
	printf("%s islevinin true deger dondurdugu karakterler\n", p);
	for (int i = 0; i < 128; ++i)
		if (fp(i))
			printf("%c", i);
	printf("\n\n");
}

int icmp(const void* vp1, const void* vp2)
{
	if (*(const int*)vp1 > *(const int*)vp2)
		return 1;

	if (*(const int*)vp1 < *(const int*)vp2)
		return -1;

	return 0;
}


int dcmp(const void* vp1, const void* vp2)
{
	if (*(const double*)vp1 > *(const double*)vp2)
		return 1;

	if (*(const double*)vp1 < *(const double*)vp2)
		return -1;

	return 0;
}

void gsort(void* vpa, size_t size, size_t width, int(*fp)(const void*, const void*))
{
	char* p = (char *)vpa;
	for (size_t i = 0; i < size - 1; ++i)
		for (size_t k = 0; k < size - 1 - i; ++k)
			if (fp(p + k * width, p + (k + 1) * width) > 0)
				gswap(p + k * width, p + (k + 1) * width, width);

}

int scmp(const void* vp1, const void* vp2)
{
	return strcmp(*(char**)vp1, *(char**)vp2);
}

void set_matrix_12(int(*p)[12], size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		for (int k = 0; k < 12; ++k) {
			p[i][k] = rand() % 10;
		}
	}
}


void set_matrix_8(int(*p)[8], size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		for (int k = 0; k < 8; ++k) {
			p[i][k] = rand() % 10;
		}
	}
}
void set_matrix_20(int(*p)[20], size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		for (int k = 0; k < 20; ++k) {
			p[i][k] = rand() % 10;
		}
	}
}


void display_matrix_12(const int(*p)[12], size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		for (int k = 0; k < 12; ++k) {
			printf("%3d ", p[i][k]);
		}
		printf("\n");

	}
	sl();

}

void display_matrix_8(const int(*p)[8], size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		for (int k = 0; k < 8; ++k) {
			printf("%3d ", p[i][k]);
		}
		printf("\n");

	}
	sl();

}


void display_matrix_20(const int(*p)[20], size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		for (int k = 0; k < 20; ++k) {
			printf("%3d ", p[i][k]);
		}
		printf("\n");

	}
	sl();
}

void set_random_matrix(int* p, size_t row, size_t col)
{
	size_t n = row * col;
	while (n--)
		*p++ = rand() % 10;
}

void display_matrix(const int* p, size_t row, size_t col)
{
	for (size_t i = 0; i < row; ++i) {
		for (size_t k = 0; k < col; ++k) {
			printf("%d ", p[i * col + k]);
		}
		printf("\n");
	}
	sl();
}

/*void set_random_matrix(void* vp, size_t row, size_t col)
{
	int* p = (int*)vp;
	size_t n = row * col;
	while (n--)
		*p++ = rand() % 10;
}

void display_matrix(const void* vp, size_t row, size_t col)
{
	const int* p = (const int*)vp;
	for (size_t i = 0; i < row; ++i) {
		for (size_t k = 0; k < col; ++k) {
			printf("%d", p[i * col + k]);
		}
		printf("\n");
	}
	sl();
}*/

void swap_str(char* p1, char* p2)
{
	char temp[20];
	strcpy(temp, p1);
	strcpy(p1, p2);
	strcpy(p2, temp);
}

char* strdup2(const char* p)
{
	char* pd = (char*)malloc(strlen(p) + 1);
	if (!pd) {
		printf("bellek yetersiz\n");
		exit(EXIT_FAILURE);
	}
	return strcpy(pd, p);
}

void sort1(char* p)
{
	size_t len = strlen(p);
	for (size_t i = 0; i < len - 1; ++i) {
		for (size_t k = 0; k < len - 1 - i; ++k) {
			if (p[k] > p[k + 1]) {
				char c = p[k];
				p[k] = p[k + 1];
				p[k + 1] = c;
			}
		}
	}
}

void sort2(char* p)
{
	size_t len = strlen(p);
	for (size_t i = 0; i < len - 1; ++i) {
		for (size_t k = 0; k < len - 1 - i; ++k) {
			if (p[k] < p[k + 1]) {
				char c = p[k];
				p[k] = p[k + 1];
				p[k + 1] = c;
			}
		}
	}
}

char* strcon(const char* p1, const char* p2)
{
	char* pd = (char*)malloc(strlen(p1) + strlen(p2) + 1);
	if (!pd) {
		printf("bellek yetersiz\n");
		exit(EXIT_FAILURE);
	}
	return strcat(strcpy(pd, p1), p2);
}

int get_random_char()
{
	int ch;

	while (!isalnum(ch = rand() % 128))
		;

	return ch;
}

char* create_random_psw1(char* p)
{
	char* ptemp = p;
	size_t len = rand() % 10 + 5;

	while (len--) {
		*p++ = get_random_char();
	}

	*p = '\0';
	return ptemp;
}

char* create_random_psw2(void)
{
	static char str[100];
	size_t idx = 0;

	size_t len = rand() % 10 + 5;

	while (len--) {
		str[idx++] = get_random_char();
	}

	str[idx] = '\0';
	return str;
}

char* create_random_psw3(void)
{
	char str[100];
	size_t idx = 0;

	size_t len = rand() % 10 + 5;

	while (len--) {
		str[idx++] = get_random_char();
	}

	str[idx] = '\0';

	return _strdup(str);
}

char* get_logfile_name(void)
{
	static char fname[40];
	time_t timer;
	time(&timer);
	struct tm* p = localtime(&timer);
	sprintf(fname, "%04d_%02d_%02d_%02d_%02d_%02d.log", p->tm_year + 1900,
		p->tm_mon + 1, p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec);

	return fname;
}

char* get_logfile_name_dynamic_memory(void)
{
	static char fname[40];
	time_t timer;
	time(&timer);
	struct tm* p = localtime(&timer);
	sprintf(fname, "%04d_%02d_%02d_%02d_%02d_%02d.log", p->tm_year + 1900,
		p->tm_mon + 1, p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec);

	char* pd = (char*)malloc(strlen(fname) + 1);
	if (!pd) {
		printf("bellek yetersiz\n ");;
		exit(EXIT_FAILURE);
	}

	return strcpy(pd, fname);
}

void bprint(int val)
{
	char str[40];

	_itoa(val, str, 2);
	printf("%032s\n", str);
}

void shift_right()
{
	unsigned int uval = ~(~0u >> 1);

	while (uval) {
		bprint(uval);
		Sleep(10);
		uval >>= 1;
	}
	bprint(0);
	Sleep(10);
}

void shift_left()
{
	unsigned int uval = 1;

	while (uval) {
		bprint(uval);
		Sleep(10);
		uval <<= 1;
	}
	bprint(0);
	Sleep(10);
}

void bprint2(int val)
{
	unsigned mask = ~(~0u >> 1);

	while (mask) {
		putchar(val & mask ? '1' : '0');
		mask >>= 1;
	}
	putchar('\n');
}

void bprint3(int val)
{
	for (int i = (int)(sizeof(int) * 8 - 1); i >= 0; --i)
		putchar((val >> i) & 1 ? '1' : '0');
	putchar('\n');
}

int sbc(int x)
{
	int cnt = 0;

	unsigned int mask = ~(~0u >> 1);
	while (mask) {
		if (x & mask)
			++cnt;
		mask >>= 1;
	}

	return cnt;
}

void print_cset(const char* pname)
{
	FILE* f = fopen(pname, "w");
	if (!f) {
		fprintf(stderr, "%s dosyasi olusturulamadi\n", pname);
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < 128; ++i)
		if (isalnum(i))
			fputc(i, f);

	fclose(f);
}

void clear_input_buffer() {
	int c;
	while ((c = getchar()) != '\n' && c != EOF)
		;
}

const char* random_name(void)
{
	const char* const pnames[] = {
		"kamil", "korhan", "beril", "turhan", "ufuk", "murathan", "figen", "malik", "bulent", "cengiz",
		"baran", "nurullah", "dilber", "tuncer", "recep", "pelinsu", "cihan", "yesim", "aziz", "kazim",
		"afacan", "tevfik", "sumeyye", "hande", "aslihan", "emine", "temel", "gulsah", "hasan", "gul",
		"soner", "ayla", "cuneyt", "tekin", "binnaz", "emrecan", "yasar", "yilmaz", "feraye", "tugra",
		"melek", "garo", "yurdagul", "tarik", "derin", "handan", "aytac", "petek", "cem", "aylin",
		"gursel", "haldun", "nazife", "hulusi", "sevilay", "sabriye", "gulden", "tansel", "ege", "turgut",
		"cahit", "berk", "nazli", "aykut", "kayhan", "cemre", "murat", "kunter", "gunay", "cahide",
		"nedim", "metin", "kerim", "utku", "cumhur", "kurthan", "poyraz", "can", "candan", "hikmet",
		"izzet", "perihan", "tufan", "zahide", "samet", "melih", "hakan", "ayse", "refik", "efe",
		"belgin", "bilal", "niyazi", "fugen", "melike", "saadet", "cemile", "nahit", "arda", "ugur",
		"aynur", "yasin", "polat", "naz", "yusuf", "gulsen", "nazif", "demir", "egemen", "necmi",
		"fazilet", "celal", "ismail", "kamile", "mahir", "caner", "suleyman", "cezmi", "diana", "sadullah",
		"atif", "huseyin", "necmettin", "devlet", "sezen", "hulya", "necmiye", "ece", "julide", "onat",
		"emre", "sinem", "teoman", "irmak", "cihat", "adem", "bilgin", "muzaffer", "suphi", "pelin",
		"yalcin", "kenan", "atalay", "akin", "durmus", "haluk", "kelami", "alparslan", "busra", "kasim",
		"durriye", "tarcan", "nihal", "gizem", "bilge", "dilek", "yasemin", "fahri", "furkan", "papatya",
		"hakki", "fadime", "devrim", "abdi", "tayyip", "yurdakul", "zekai", "nagehan", "ata", "naci",
		"mert", "yelda", "cebrail", "rumeysa", "beyhan", "azize", "cemil", "sezer", "beste", "ciler",
		"enes", "cahide", "tayyar", "cansu", "burak", "ediz", "sefa", "anil", "alev", "atil",
		"nefes", "cetin", "tansu", "bora", "sevim", "sarp", "fuat", "kaya", "zarife", "tanju",
		"su", "kerem", "handesu", "Jade", "halime", "gurbuz", "okan", "azmi", "sevda", "leyla",
		"galip", "alican", "atakan", "feramuz", "efecan", "osman", "nihat", "sefer", "zerrin", "binnur",
		"taner", "kayahan", "nalan", "tonguc", "kezban", "kaan", "abdulmuttalip", "dost", "deniz", "refika",
		"tijen", "umit", "yunus", "zahit", "melisa", "hulki", "hilmi", "edip", "muslum", "canan",
		"dogan", "berivan", "adnan", "helin", "fikret", "derya", "sidre", "abdullah", "billur", "nurdan",
		"agah", "engin", "burhan", "suheyla", "esra", "sadri", "sezai", "esen", "askin", "rupen",
		"ercument", "birhan", "ahmet", "polathan", "tayfun", "mustafa", "zubeyde", "pakize", "nevsin", "naciye",
		"erdem", "asim", "orkun", "sami", "sade", "demet", "keriman", "yavuz", "mehmet", "muhsin",
		"saniye", "cesim", "aydan", "eda", };

	return pnames[rand() % asize(pnames)];

}
