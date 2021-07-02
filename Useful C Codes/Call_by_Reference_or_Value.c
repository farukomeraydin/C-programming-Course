#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

void get_circle_area2(double r, double* pArea)
{
	*pArea = 3.1415926 * r * r;
}

int main()
{
	/*double r = 4.567;
	double area;

	area = get_circle_area(r);
	printf("Area = %f\n", area); //Call by value*/

	double r = 4.567;
	double area;

	get_circle_area2(r, &area);

	printf("area = %f\n", area); //Call by reference

}
