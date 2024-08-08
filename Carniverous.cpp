/*Include the header files.*/
#include "Flower.h"
#include "Carniverous.h"
#include "Flower.cpp"

/*Guards*/
#ifndef CARNIVEROUS_CPP
#define CARNIVEROUS_CPP

/*Set namespace.*/
using namespace std;

/*Implement the constructor from its definition.*/

/*Parameters constructor.*/

Carniverous::Carniverous(string newFood, string myFlowerName):Flower(myFlowerName) {
	/*Call the base class Flower constructor to initiate the inherited class object.*/
	
	/*The set food is the additional functionality.*/
	setFood(newFood);
	cout << "A new carniverous plant was created, and its food is " << food << "!  And its name is " << flowerName << "!" << endl;
	cout << "The Carniverous class inherits from the Flower class, extending functionality." << endl;
}

/*Implementation of member functions.*/

void Carniverous::setFood(string myFood) {
	food = myFood;
}

string Carniverous::getFood() {
	return food;
}

/*Guards*/
#endif