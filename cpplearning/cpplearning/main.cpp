//
//  main.cpp
//  cpplearning
//
//  Created by iOSBacon on 2017/4/5.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "ExerciseClass.cpp"

using namespace std;

int main(int argc, const char * argv[]) {
    int a[10], i;
    printf("%p %p", &a[10], &i);
    return 0;
}

void data_operation(void){
	char data[100];
	ofstream outfile;
	outfile.open("afile.dat");

	cout << "Writing to the file" << endl;
	cout << "Enter your name:";
	cin.getline(data, 100);

	outfile << data << endl;

	cout << "Enter your age : ";
	cin >> data;
	cin.ignore();

	outfile << data << endl;

	outfile.close();

}

void print_current_time(void)
{
    time_t now = time(0);
    
    char* dt = ctime(&now);
    
    cout << "本地日期和时间:" << dt << endl;
    
//    tm *gmtm = gmtime(&now);
//    dt = asctime(gmtm);
//    cout << "UTC 日期和时间：" << dt << endl;
}
