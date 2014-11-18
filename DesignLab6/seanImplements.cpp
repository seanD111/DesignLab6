/*
 * seanImplements.cpp
 *
 *  Created on: Nov 18, 2014
 *      Author: sddelong
 */
#include "seanFunctions.h"

void Tool::setStrength(int a){
	strength=a;
}
int Tool::getStrength(){
	return strength;
}
char Tool::getType(){
	return type;
}
 Rock::Rock(){
	strength=DEFAULT_STR;
	type='r';
}
Rock::Rock(int a){
	strength=a;
	type='r';
}
 Paper::Paper(){
	strength=DEFAULT_STR;
	type='p';
}
 Paper::Paper(int a){
	strength=a;
	type='p';
}
 Scissors::Scissors(){
	strength=DEFAULT_STR;
	type='s';
}
 Scissors::Scissors(int a){
	strength=a;
	type='s';
}

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
