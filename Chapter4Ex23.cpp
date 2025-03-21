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
using namespace std;
void DisplayMenu();
int  GetChoice();
double CalculateAreaOfCircle(double radius);
double AskForRadius();
double CalculateAreaOfRectangle(double height = 10.0, double width = 5.0);
double GetDimension(string text);
double CalculateAreaOfTriangle(double height = 10, double base = 20.0);
void ExecuteChoice(int choice);


int main()
{
 
	int choice;
	 
	DisplayMenu();

	do {
		
		choice = GetChoice();
		ExecuteChoice(choice);
		DisplayMenu();
	} while (choice != 4);

}


void DisplayMenu()
{
	cout << "Geometry calculator" << endl;                                //menu display
	cout << "     1. calculate the area of a circle" << endl;
	cout << "     2. calculate the area of a rectangle" << endl;
	cout << "     3. calculate the area of a triangle" << endl;
	cout << "     4. Exit" << endl;
	cout << "     Enter your choice (1-4)" << endl;
}
int GetChoice() {
	int choice;
	cin >> choice;
	while (choice < 1 || choice>4)                                           //input validation: choice
	{
		cout << "ERROR! invalid selction. Restart and choose 1-4" << endl;
		cin >> choice;
	}
	return choice;

}

double GetDimension(string text) {
	double dimension;
	cout << text;
	cin >> dimension;
	return dimension;

double CalculateAreaOfTriangle()
{
	cout << "Triangle." << endl;
	double height = GetDimension("Enter the height of the triangle");
	double base = GetDimension("Enter the base of the triangle");
	double AreaOfTriangle = CalculateAreaofTriangle(height,base);

 
	return area = base * height / 2;
	 
	}
}

double CalculateAreaOfRectangle()
{
	cout << "Rectangle." << endl;
	double height = GetDimension("Enter the height of the rectangle");
	double width = GetDimension("Enter the width of the rectangle");
	 


	return height * width;


}
double CalculateAreaOfCircle(double radius)
{
	return pow(radius, 2);

}
void ExecuteChoice(int choice)
{

	switch (choice) {
	case 1:
		double radius = AskForRadius();
		DisplayAnswer(CalculateAreaOfCircle(radius));
		break;

	case 2: {
		double h = GetDimension("Please enter the height:");//rectangle
		double w = GetDimension("Please enter the width:");//rectangle
		DisplayAnswer(CalculateAreaOfRectangle(h, w));
		break;
	}
	case 3: {
		double h = GetDimension("Please enter the height:");//rectangle
		double b = GetDimension("Please enter the base:");//rectangle//triangle
		DisplayAnswer(CalculateAreaOfTriangle(h, b));
		break;

	case 4:cout << "     Goodbye" << endl;
	}
}


 


