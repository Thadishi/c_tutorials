#include <stdio.h>
#include <stdlib.h>

int main(){

	int sum = 0;
	for(int i=0; i<=100; i++){
		sum = sum+i;
	}

	printf("The first 100 triangular n's are %d\n",sum );

}