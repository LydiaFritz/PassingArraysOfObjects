#ifndef RECT_H
#define RECT_H

class Rectangle {
private:
	double length, width;
public:
	Rectangle();
	Rectangle(double, double);
	double getWidth()const;
	double getLength()const;
	void setWidth(double);
	void setLength(double);
};

//implementations (these are usually in the .h file)
Rectangle::Rectangle() {
	length = 1.0;
	width = 1.0;
}

Rectangle::Rectangle(double l, double w) {
	width = w;
	length = l;
}

double Rectangle::getWidth()const {
	return width;
}

double Rectangle::getLength()const {
	return length;
}

void Rectangle::setWidth(double w) {
	width = w;
}

void Rectangle::setLength(double l) {
	length = l;
}

#endif
