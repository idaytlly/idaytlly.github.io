
#include <iostream>
using namespace std;

double getLength ();
double getWidth ();
double getArea (double, double);
void displayData(double, double, double);

double getLength(){
	double Length;
	cout << "Enter the length of the rectangle: ";
	cin >> Length;
	return Length;
}

double getWidth(){
	double Width;
	cout << "Enter the width of the rectangle: ";
	cin >> Width;
	return Width;
}

double getArea (double L, double W){
	double area;
	area = L * W;
	return area;
}

void displayData (double Length, double Width, double area){
	cout << "\n\n";
	cout << "The length of the rectangle is: " << Length<< endl;
	cout << "The width of the rectangle is: " << Width << endl;
	cout << "The area of the rectangle is: " << area << endl;
}

int main(){
	double Length, Width, area;
	Length = getLength();
	Width = getWidth();
	area = getArea (Length, Width);
	displayData( Length, Width, area);
	
	return 0;
}