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

	Scissors s1(3);
	Paper p1(3);
	Rock r1(3);
	cout << s1.fight(p1) << p1.fight(s1) << endl;
	cout << p1.fight(r1) << r1.fight(p1) << endl;
	cout << r1.fight(s1) << s1.fight(r1) << endl;

	return 0;
}


