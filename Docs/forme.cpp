#include "forme.h"



forme::forme()
{
	//set values for default constructor
	setType("null");
	setColour(Scalar(0,0,0));

}

forme::forme(string name){

	setType(name);
	
	if(name=="rectangle"){

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

		setHSVmin(Scalar(0,0,0));
		setHSVmax(Scalar(255,255,255));

		//BGR value for Green:
		setColour(Scalar(0,255,0));

	}
	if(name=="triangle"){

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

		setHSVmin(Scalar(0,0,0));
		setHSVmax(Scalar(255,255,255));

		//BGR value for Yellow:
		setColour(Scalar(0,255,255));

	}
	if(name=="circle"){

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

		setHSVmin(Scalar(0,0,0));
		setHSVmax(Scalar(255,255,255));

		//BGR value for Red:
		setColour(Scalar(0,0,255));

	}



}

forme::~forme(void)
{
}

int forme::getXPos(){

	return forme::xPos;

}

void forme::setXPos(int x){

	forme::xPos = x;

}

int forme::getYPos(){

	return forme::yPos;

}

void forme::setYPos(int y){

	forme::yPos = y;

}

Scalar forme::getHSVmin(){

	return forme::HSVmin;

}
Scalar forme::getHSVmax(){

	return forme::HSVmax;
}

void forme::setHSVmin(Scalar min){

	forme::HSVmin = min;
}


void forme::setHSVmax(Scalar max){

	forme::HSVmax = max;
}