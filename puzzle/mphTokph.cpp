#include <iostream>

using namespace std;
int main(int argc, char**argv){
	int kph;

	cout << "Enter the kph: ";
	cin >> kph;

	float mph = kph * 0.621371;

	printf("The speed in mph is %f\n",mph );
	cin.clear();
	cin.sync();
	cin.get();
}