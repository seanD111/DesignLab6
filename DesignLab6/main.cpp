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
	iTools.print(int_arr, 11);
	iTools.printReverse(int_arr, 11);
	cout<<iTools.sumAll(int_arr, 11)<<" " <<iTools.productOfArray(int_arr, 11)<<"\n\n";
	ArrayUtils<float> fTools;
	fTools.print(float_arr, 5);
	fTools.printReverse(float_arr, 5);
	cout<<fTools.sumAll(float_arr, 5)<<" " <<fTools.productOfArray(float_arr, 5)<<"\n\n";
	ArrayUtils<char> cTools;
	cTools.print(char_arr, 8);
	cTools.printReverse(char_arr, 8);
	cout<<cTools.sumAll(char_arr, 8)<<" " <<cTools.productOfArray(char_arr, 8)<<"\n\n";
	ArrayUtils<string> sTools;
	sTools.print(str_array, 6);
	sTools.printReverse(str_array, 6);
	//cout<<sTools.sumAll(str_array, 6)<<"\n\n";

	float avg=0;
	try {
		avg=calculateAverage(40, 20, 30, 40);
	}

	catch(OutOfRange &){
		cerr<<"\n\nNumbers out of range!\n\n";
	}
	Scissors s1(3);
	Paper p1(3);
	Rock r1(3);
	s1.fight(p1);
	cout<<endl;
	p1.fight(r1);
	cout<<endl;
	r1.fight(s1);
	cout<<endl;
	s1.fight(s1);

	return 0;
}



