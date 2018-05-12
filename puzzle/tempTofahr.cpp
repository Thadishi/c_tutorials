#include <iostream>

using namespace std;
int main(int argc, char**argv){

	int centigrades;

	cout << "enter the temp in centigrades: ";
	cin >> centigrades;

	float fahrenheit = 1.8 * centigrades + 32;

	printf("the temp in fahrenheit is %f\n", fahrenheit);

	cin.clear();
	cin.sync();
	cin.get();
}