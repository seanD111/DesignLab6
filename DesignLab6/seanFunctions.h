/*
 * seanFunctions.h
 *
 *  Created on: Nov 18, 2014
 *      Author: sddelong
 */

#ifndef SEANFUNCTIONS_H_
#define SEANFUNCTIONS_H_
#include <iostream>
#include <string>


//set the default strength to 20
#define DEFAULT_STR 20
using namespace std;


/**********************************Tool class*****************************/
class Tool{
protected:
	int strength;
	char type;
public:
	//function to return the strength of the tool
	int getStrength();

	//function to return the type of the tool
	char getType();

	//function to set the strength of the tool
	void setStrength(int);

};

/******************************Rock class; derives from Tool*************************/
class Rock : public Tool{
public:
	Rock();
	Rock(int);
	bool fight(Tool);
};

/******************************Paper class; derives from Tool************************/
class Paper : public Tool{
public:
	Paper();
	Paper(int);
	bool fight(Tool);
};

/***************************Scissors class; derives from Tool*************************/
class Scissors : public Tool{
public:
	Scissors();
	Scissors(int);
	bool fight(Tool);
};


template<class T> class ArrayUtils {
public:
	void print(T* array, int size){
		for(int i=0; i<size; i++){
			cout<< array[i]<<" ";
		}
	}
	void printReverse(T* array, int size){
		for(int i=size-1; i>-1; i--){
			cout<< array[i]<<" ";
		}
	}
	T sumAll(T* array, int size){
		T sum= NULL;
		for(int i=0; i<size; i++){
			sum+=array[i];
		}
		return(sum);
	}
	T productOfArray(T* array, int size){
		T product= 1;
		for(int i=0; i<size; i++){
			product*=array[i];
		}
		return(product);
	}

};



#endif /* SEANFUNCTIONS_H_ */
