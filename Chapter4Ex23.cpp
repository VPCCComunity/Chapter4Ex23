/*
File name: chapter4exercise23.cpp
programmer: Blake Jewell
date: 2.28.25
requirements:
write a program that asks the user which of 4 options they would like to select. option 1
will calculate the area of a circle, 2 will be  a rectangle, 3 will be a triangle, 4 will
end the program.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	using namespace std;
	int choice;
	double radius, base, height, rheight, width;                          //defining variables


	cout << "Geometry calculator" << endl;                                //menu display
	cout << "     1. calculate the area of a circle" << endl;
	cout << "     2. calculate the area of a rectangle" << endl;
	cout << "     3. calculate the area of a triangle" << endl;
	cout << "     4. Exit" << endl;
	cout << "     Enter your choice (1-4)" << endl;
	cin >> choice;
	if (choice < 1 || choice>4)                                           //input validation: choice
		cout << "ERROR! invalid selction. Restart and choose 1-4" << endl;

	switch (choice) {
	case 1: {                                                             //circle
		cout << "circle." << endl;
		cout << "What is the radius: ";
		cin >> radius;
		if (radius < 0)                                                   //input validation: radius
			cout << "Number is negative. Start over." << endl;
		else {
			double circle = 3.14159 * pow(radius, 2);
			cout << "area is " << circle << endl;
		}
		break;
	}
	case 2: {                                                             //rectangle
		cout << "rectangle." << endl;
		cout << "Enter the height: " << endl;
		cin >> rheight;
		if (rheight < 0) {                                                //input validation: rectangle height
			cout << "Number is negative. Start over." << endl;
		}
		else {
			cout << "Enter the width: " << endl;
			cin >> width;                                                 //input validation: width
			if (width < 0) {
				cout << "Number is negative. Start over." << endl;
			}
			else {
				double rectangle = rheight * width;
				cout << "area is " << rectangle << endl;
			}
		}
		break;
	}
	case 3: {                                                             //triangle
		cout << "Triangle." << endl;
		cout << "Enter the height:" << endl;
		cin >> height;
		if (height < 0) {                                                 //input validation: height
			cout << "Number is negative. Start over." << endl;
		}
		else {
			cout << "Enter the base: " << endl;
			cin >> base;
			if (base < 0) {                                               //input validation: base
				cout << "Number is negative. Start over." << endl;
			}
			else {
				double triangle = base * height / 2;
				cout << "area is " << triangle << endl;
			}
		}
		break;


	}
	case 4:cout << "     Goodbye" << endl;                                //end program
	}

}