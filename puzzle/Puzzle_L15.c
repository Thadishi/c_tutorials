#include <stdio.h>
#include <stdlib.h>

int main(){
	int sum =0;
	int n=50;

	char str[100];
	int ent; //Declare the identifier to be entered
	printf("Enter a value :");
	scanf("%d", &ent); //Enter the value that you want to input

	for (int i=0; i<=ent; i++){
		sum = sum+i;
	}
	printf("The sum of %d numbers is %d\n", ent, sum);
	//printf("You have entered: %d\n", ent);

	return 0;
}