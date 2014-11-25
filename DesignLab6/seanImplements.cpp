/*
 * seanImplements.cpp
 *
 *  Created on: Nov 18, 2014
 *      Author: sddelong
 */
#include "seanFunctions.h"


/******************************Tool Implements*************************/
//setstrength function; sets strength to integer input//
void Tool::setStrength(int a){
	strength=a;
}

//getStrength function; returns strength//
int Tool::getStrength(){
	return strength;
}

//getStrength function; returns strength//
char Tool::getType(){
	return type;
}


/******************************Rock Implements*************************/
//Constructors//
Rock::Rock(){
	strength=DEFAULT_STR;
	type='r';
}
Rock::Rock(int a){
	strength=a;
	type='r';
}

//Rock's fight function; needs to://
//a)change the rock's strength according to opponent
//b)return if this rock won or lost the fight
bool Rock::fight(Tool enemy_tool){
	bool won=false;
	switch((enemy_tool.getType())){
	case 'r':
		if(strength>enemy_tool.getStrength()) won=true;
		break;
	case 'p':
		if((strength/2)>enemy_tool.getStrength()) won=true;
		break;
	case 's':
		if((strength*2)>enemy_tool.getStrength()) won=true;
		break;
	}
	return won;

}

/******************************Paper Implements*************************/
//Constructors//
 Paper::Paper(){
	strength=DEFAULT_STR;
	type='p';
}
 Paper::Paper(int a){
	strength=a;
	type='p';
}

 //Paper's fight function; needs to://
 //a)change the paper's strength according to opponent
 //b)return if this paper won or lost the fight
 bool Paper::fight(Tool enemy_tool){
	bool won=false;
	switch(enemy_tool.getType()){
	case 'r':
		if(strength*2>enemy_tool.getStrength()) won=true;
		break;
	case 'p':
		if((strength)>enemy_tool.getStrength()) won=true;
		break;
	case 's':
		if((strength/2)>enemy_tool.getStrength()) won=true;
		break;
	}
	return won;
}

 /******************************Scissors Implements*************************/
 //Constructors//
 Scissors::Scissors(){
	strength=DEFAULT_STR;
	type='s';
}
 Scissors::Scissors(int a){
	strength=a;
	type='s';
}

 //Scissors fight function; needs to://
 //a)change the scissors' strength according to opponent
 //b)return if this scissors' won or lost the fight
bool Scissors::fight(Tool enemy_tool){
	bool won=false;
	switch(enemy_tool.getType()){
	case 'r':
		if(strength/2>enemy_tool.getStrength()) won=true;
		break;
	case 'p':
		if((strength*2)>enemy_tool.getStrength()) won=true;
		break;
	case 's':
		if((strength)>enemy_tool.getStrength()) won=true;
		break;
	}
	return won;
}





