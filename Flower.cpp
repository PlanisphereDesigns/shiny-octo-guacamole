/*include*/
#include "Flower.h"
#include <iostream>
#include<string>
#include<cmath>

/*Guards*/
#ifndef FLOWER_CPP
#define FLOWER_CPP

/*Set the namespace.*/
using namespace std;

/*The functions from Flower.h will now be defined.*/
/*No parameters default constructor.*/
Flower::Flower() {	
}

/*Constructor with parameters.*/
 Flower::Flower(string myFlowerName) {
 /*No error checking is included in the constructor, because the constructor does not take user input and
 therefore error checking in not neccesary.*/
	flowerName = myFlowerName;
	cout << "A new flower with the name of " << myFlowerName << " was constructed!" << endl;
}

void Flower::setFlowerName(string flower) {
	flowerName = flower;
}

void Flower::setNumPetals(int petals) {
	numPetals = petals;
}

void Flower::setFlowerColor(string color) {
	flowerColor = color;
}

string Flower::getFlowerColor() {
	return flowerColor;
}

int Flower::getNumPetals() {
	return numPetals;
}

string Flower::getFlowerName() {
	return flowerName;
}

/*Guards*/
#endif

