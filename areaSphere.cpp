#include <iostream>

using namespace std;
int main (int argc, char**argv){
	float radius;

	cout << "Enter the radius of the sphere: ";
	cin >> radius;

	float fourbythree = 4 / 3;
	float volume = fourbythree*3.431* radius*radius*radius;

	printf("the voulum of sphere is %f\n", volume );

	cin.clear();
	cin.sync();
	cin.get();
}