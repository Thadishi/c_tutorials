#include <stdio.h>
#include <stdlib.h>

/* (x+y)/2c*/

int main(){
	double x =12.3, y=7.2, c=3.2;
	double result;

	result = (x+y)/(2*c);

	printf("result: %f\n", result);
	return 0;
}