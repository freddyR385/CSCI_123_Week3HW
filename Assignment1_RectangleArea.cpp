/* ## Assignment 1
The area of a rectangle is the rectangle’s length times its width. 
Write a program that asks for the length and width of two rectangles. 
The program should then tell the user which rectangle has the greater area or if the areas are the same.
#include <iostream> */

#include <iostream>
using namespace std;

int main()
{
	double length1, width1, length2, width2;
    double area1, area2 = 0;

    cout << "Hello, welcome to the RectangleArea program! \n\n";
    cout << "This program will compare the areas of two rectangles. \n\n";

    cout << "Please enter the length and width of the first rectangle (seperated by a space): ";
    cin >> length1 >> width1;

    cout << "Please enter the length and width of the second rectangle (seperated by a space): ";
    cin >> length2 >> width2;

    area1 = length1 * width1;
    area2 = length2 * width2;

    if ( area1 > area2) 
    {
        cout << "The area of the first rectangle is greater than the area of the second rectangle. \n";
    }
    else if ( area1 < area2) 
    {
        cout << "The area of the second rectangle is greater than the area of the first rectangle. \n";
    }
    else {
        cout << "The areas of both rectangles are the same. \n";
    }

    return 0;
}

