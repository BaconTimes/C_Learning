//
// Created by iOSBacon on 2017/4/14.
//
#include <iostream>
#include <exception>
using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero condition!";
    }
    return (a/b);
}

struct MyException: public exception
{
    const char * what () const throw()
    {
        return "C++ Exception";
    }
};

class Shape{
protected:
    int width, height;
public:
    Shape(int a=0, int b=0){
        width = a;
        height = b;
    }

    virtual int area(){
        cout << "Parent class area :" <<endl;
        return 0;
    }
};

class Rectangle: public Shape{
public:
    Rectangle(int a=0, int b=0):Shape(a, b){}
    int area(){
        cout << "Rectangle class area: " <<endl;
        return (width * height);
    }
};

class Triangle: public Shape{
public:
    Triangle(int a=0, int b=0): Shape(a, b) {}
    int area(){
        cout << "Triangle class area :" << endl;
        return  (width * height / 2);
    }
};