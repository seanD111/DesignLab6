/*
 * main.cpp
 *
 *  Created on: Nov 18, 2014
 *      Author: sddelong
 */
#include "seanFunctions.h"
using namespace std;
int main() {
	//All of these are for functionality testing//

	//Different array types for testing ArrayUtils
	int int_arr[11]={0,1,2,3,4,5,6,7,8,9,10};
	float float_arr[5]={0.5, 1.5, 2.5, 3.5, 4.5};
	char char_arr[8]={'a','b','c','d','e','f','g','h'};
	string str_array[6]={"tiger", "monkey", "elephant", "rhino", "zebra", "penguin"};

	ArrayUtils<int> iTools;
	cout<<"Array: ";
	iTools.print(int_arr, 11);
	cout<<"  Reverse Array: ";
	iTools.printReverse(int_arr, 11);
	cout<<" Sum: "<<iTools.sumAll(int_arr, 11)<<" Product: " <<iTools.productOfArray(int_arr, 11)<<"\n\n";

	ArrayUtils<float> fTools;
	cout<<"Array: ";
	fTools.print(float_arr, 5);
	cout<<"  Reverse Array: ";
	fTools.printReverse(float_arr, 5);
	cout<<" Sum: "<<fTools.sumAll(float_arr, 5)<<" Product: " <<fTools.productOfArray(float_arr, 5)<<"\n\n";

	ArrayUtils<char> cTools;
	cout<<"Array: ";
	cTools.print(char_arr, 8);
	cout<<"  Reverse Array: ";
	cTools.printReverse(char_arr, 8);
	cout<<" Sum: "<<cTools.sumAll(char_arr, 8)<<" Product: " <<cTools.productOfArray(char_arr, 8)<<"\n\n";

	ArrayUtils<string> sTools;
	cout<<"Array: ";
	sTools.print(str_array, 6);
	cout<<"  Reverse Array: ";
	sTools.printReverse(str_array, 6);

	//calculate average with exceptions
	float avg=0;
	try {
		avg=calculateAverage(40, 20, 30, 40);
	}

	catch(OutOfRange &){
		cerr<<"\n\nNumbers out of range!\n\n";
	}

	//testing the rock, paper, scissors classes
	Scissors s1(3);
	Paper p1(3);
	Rock r1(3);
	s1.fight(p1);
	cout<<endl;
	p1.fight(r1);
	cout<<endl;
	r1.fight(s1);
	cout<<endl;


	return 0;
}



