#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


void func(int, int, double* p) {
	//Code....
}

int main()
{
	/*Instead of this*/
	//double dval = 3.645;
	//func(10, 20, &dval);

	/*We can execute code below*/
	func(10, 20, &(double){ 2.385785 });

}
