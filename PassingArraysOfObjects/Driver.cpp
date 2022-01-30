/*
* Lydia K Fritz
* Prog demonstrates passing arrays of objects
* from main() to other functions
*/

#include <iostream>
#include <ctime>
#include "Rectangle.h"

using namespace std;

//function that takes an array of Rectangles
//and returns the sum of their area
double getTotalArea(Rectangle arr[]);

//function that shows the area of each Rectangle
void showArea(Rectangle arr[]);


int main() {

	srand(time(NULL));

	//make an array of 5 rectangles
	Rectangle myRectangles[5];

	//set the length and width using random values
	for (int i = 0; i < 5; i++) {
		myRectangles[i].setWidth(rand() % 10 + 1);
		myRectangles[i].setLength(rand() % 15 + 1);
	}

	//call showArea
	showArea(myRectangles);

	//show the total area
	cout << "The total area is " << getTotalArea(myRectangles) << " sq. units\n";

}

void showArea(Rectangle arr[]) {
	//access each element in arr and display the area
	for (int i = 0; i < 5; i++) {
		cout << "Rectangle " << (i + 1) << " has area " << arr[i].getLength() * arr[i].getWidth() << endl;
	}
}

double getTotalArea(Rectangle arr[]) {
	double totalArea = 0.0;
	//access each element in arr and add the area to totalArea
	for (int i = 0; i < 5; i++) {
		totalArea += arr[i].getWidth() * arr[i].getLength();
	}
	return totalArea;
}