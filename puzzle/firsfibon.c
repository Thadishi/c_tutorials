#include <stdio.h>

int main(){
	int fib[10], ind;

	fib[0] =0;
	fib[1]=1;

	for(ind=2; ind<10; ++ind){
		fib[ind] = fib[ind-2]+fib[ind-1];
	}
	for(ind=0; ind<10; ++ind){
		printf("%d\n", fib[ind]);
	}

	return 0;
}