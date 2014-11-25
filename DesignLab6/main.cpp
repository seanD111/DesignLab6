/*
 * main.cpp
 *
 *  Created on: Nov 18, 2014
 *      Author: sddelong
 */
#include "seanFunctions.h"
using namespace std;
int main() {
	// Example main function
	// You may add your own testing code if you like
	int int_arr[11]={0,1,2,3,4,5,6,7,8,9,10};
	float float_arr[5]={0.5, 1.5, 2.5, 3.5, 4.5};
	double double_arr[5]={0.1, 1, 1, 1, 1};
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

//	Scissors s1(3);
//	Paper p1(3);
//	Rock r1(3);
//	cout << s1.fight(p1) << p1.fight(s1) << endl;
//	cout << p1.fight(r1) << r1.fight(p1) << endl;
//	cout << r1.fight(s1) << s1.fight(r1) << endl;

	return 0;
}



