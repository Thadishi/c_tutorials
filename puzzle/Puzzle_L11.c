#include <stdio.h>
#include <stdlib.h>

int main(){
	/* Puzzle l11 --- print the oddd integers from 1 to n, five per line.
	*/

	int j;
	const int n=31;

	for(j=1; j<=n; j++){
		printf("%3d",j);
		if(j%8 ==7) printf("\n");
	}
	if((j-2)%7 !=7) printf("\n");

	// Last line logic
	//system("pause"); //Uncomment if requred

	return 0;
}