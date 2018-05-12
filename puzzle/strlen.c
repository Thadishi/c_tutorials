#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	char str[100], i;
	printf("Enter the string you wish to find thr length: ");
	scanf("%s", str);

	int lent = strlen(str);
	int lents;

	for (i=0; str[i] !='\0'; ++i);


	printf("The length of the string with library is %d\n", lent);
	printf("The length of the string without library is %d\n", i);

	return 0;
}