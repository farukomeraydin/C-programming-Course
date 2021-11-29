#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main()
{
	/*When scanf is used new line remains in standard input buffer.
	  Therefore, getchar function will get that new line and it will print out 10.
	  Buffer should be empty but unfortunately there is no standard way to do this.
	  Typically this can be done with either "rewind(stdin);" or "fflush(stdin);".
	  However, these don't guarantee to empty buffer. Do not use these functions.
	  Use the function clear_input_buffer.
	*/
	int ival;
	printf("Enter an integer: ");
	scanf_s("%d", &ival);
	printf("%d\n", ival);

	printf("Yes or No? (y/n): ");
	clear_input_buffer(); //If you don't execute this line, it will print out 10 because of new line. 
	int ch = getchar();
	printf("ch = %d\n", ch);

}
