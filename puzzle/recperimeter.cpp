#include <iostream>

using namespace std;

int main(int argc, char**argv){
	int width;
	int height;

	cout<< "Enter the height of the rectangele: ";
	cin >> height;

	cout <<"Enter the width of the rectangle: ";
	cin >> width;

	float perimeter = 2*height + 2*width;

	printf("The perimeter of the rectangle is %f\n", perimeter);
	cin.clear();
	cin.sync();
	cin.get(); 
}