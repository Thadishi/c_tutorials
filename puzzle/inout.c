#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[200];

	printf("Your input string: ");
	//scanf("%s", str);

	gets(str);

	printf("The string you entered is %s\n",str );

	return 0;
}