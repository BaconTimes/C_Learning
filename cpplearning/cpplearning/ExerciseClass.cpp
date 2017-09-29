//
//  ExerciseClass.cpp
//  cpplearning
//
//  Created by iOSBacon on 2017/4/12.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include <iostream>

using namespace std;

class Adder {
public:
	Adder(int i = 0){
		total = i;
	}

	void addNum(int number){
		total += number;
	}

	int getTotal()
	{
		return total;
	}
private:
	int total;
};

class printData
{
public:
	void print(int i){
		cout << "Printing int:" << i << endl;
	}

	void print(double f) {
		cout << "Printing float:" << f << endl;
	}

	void print(char c[]){
		cout << "Printing character:" << c <<endl;
	}
};

class Box
{
public:
	double getVolume(void)
	{
		return length * breadth * height;
	}

	void setLength(double len)
	{
		length = len;
	}

	void setBreadth(double bre)
	{
		breadth = bre;
	}

	void setHeight(double hei)
	{
		height = hei;
	}

	Box operator+(const Box& b)
	{
		Box box;
		box.length = this->length + b.length;
		box.breadth = this->breadth + b.breadth;
		box.height = this->height + b.height;
		return box;
	}
private:
	double length;
	double breadth;
	double height;
};

class Line
{
public:
	void setLength( double len);
	double getLength( void );
	Line(); // 这是构造函数

private:
	double length;
};

Line::Line(void)
{
	cout << "Object is being created" << endl;
}

void Line::setLength( double len)
{
	length = len;
}

double Line::getLength( void )
{
	return length;
}


class Shape
{
protected:
	int width, height;
public:
	Shape(int a=0, int b=0)
	{
		width = a;
		height = b;
	}
	int area()
	{
		cout << "Parent class area :" << endl;
		return 0;
	}
	
};

class Rectangle: public Shape {
public:
	Rectangle(int a=0, int b=0):Shape(a, b){}
	int area()
	{
		cout << "Rectangle class area:" <<endl;
		return (width * height);
	}
};

class Triangle: public Shape {
public:
	Triangle (int a=0, int b=0):Shape(a, b){}
	int area()
	{
		cout << "Triangle class area:" << endl;
		return (width * height / 2);
	}
};