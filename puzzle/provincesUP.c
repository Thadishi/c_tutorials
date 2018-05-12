#include <stdio.h>

int main(int argc, char *argv[]){
	char *provinces[] = { "Limpopo", "North West", "Mpumalanga", "Gauteng", "Northen Cape", "Western Cape", "Kwa Zulu-Natal", "Eastern Cape", "Free State"};

	for (int i=0; i<9; ++i){
		printf("Provinces[%d] = %s\n", i, provinces[i]);

		printf("Provinces[%d] = %s\n", i, provinces[i]);

	}

	return 0;
}