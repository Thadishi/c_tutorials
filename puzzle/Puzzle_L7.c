#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
	int i, N;

	printf("Enter N: \n");
	scanf("%d\n", &N);

	for(i=1; i<=N; i+=2){
		printf("%3d\n",i );
	}

	return 0;
}