/*
 * seanFunctions.h
 *
 *  Created on: Nov 18, 2014
 *      Author: sddelong
 */

#ifndef SEANFUNCTIONS_H_
#define SEANFUNCTIONS_H_
#include <iostream>
#include <cstdlib>

#define DEFAULT_STR 20
class Tool{
protected:
	int strength;
	char type;
public:
	int getStrength();
	char getType();
	void setStrength(int);

};

class Rock : public Tool{
public:
	Rock();
	Rock(int);
	bool fight(Tool);
};

class Paper : public Tool{
public:
	Paper();
	Paper(int);
	bool fight(Tool);
};
class Scissors : public Tool{
public:
	Scissors();
	Scissors(int);
	bool fight(Tool);
};

#endif /* SEANFUNCTIONS_H_ */
