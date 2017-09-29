#include <iostream>
#include <fstream>
#include "Exercise.cpp"

using namespace std;

int main() {

    Shape * shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);

    shape = &rec;
    shape->area();

    shape = &tri;
    shape->area();

    return 0;
}

void file_operation(){
    char data[100];

    ofstream outfile;
    outfile.open("after.dat");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    outfile << data << endl;

    cout << "Enter your age:";
    cin >> data;
    cin.ignore();

    outfile << data << endl;

    outfile.close();
}