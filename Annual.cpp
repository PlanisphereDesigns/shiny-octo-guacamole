/*Include the header files.*/
#include "Flower.h"
#include "Annual.h"
#include "Flower.cpp"
/*Other inclusions.*/
#include <iostream>
#include <string>
/*Set namespace.*/
using namespace std;

/*Guards*/
#ifndef ANNUAL_CPP
#define ANNUAL_CPP

/*Set namespace.*/
using namespace std;

/*Implement the constructor from its definition.*/

/*Parameters constructor.*/

Annual::Annual(string flowerName, int numberOfFlowers) : Flower(flowerName) {
	/*Call the base class Flower constructor to initiate the inherited class object.*/

	/*The set number of flowers is the added functionality.*/
	setNumberOfFlowers(numberOfFlowers);
	cout << "A new annual plant was created, and its number of flowers is " << numberOfFlowers << "!  And its name is " << flowerName << "!" << endl;
	cout << "The Annual class inherits from the Flower class, extending functionality." << endl;
}

/*Implementation of member functions.*/

void Annual::setNumberOfFlowers(int numberOfFlowers) {
	flowers = numberOfFlowers;
}

int Annual::getNumberOfYears() {
	return years;
}

int Annual::getNumberOfFlowers() {
	return flowers;
}

/*Guards*/
#endif