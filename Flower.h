#ifndef FLOWER_H
#define FLOWER_H
/*Guards*/
/*Includes*/
#include<iostream>
#include <string>
using namespace std;

/*Base class definition, for inheritance.*/
/*BASE CLASS: FLOWER*/
class Flower {
public:

	/*CONSTRUCTORS*/
	/*Default*/
	Flower();
	/*Default, with parameters.*/
	Flower(string FlowerName);

	/*SETTERS*/
	void setFlowerName(string flowerName);
	void setFlowerColor(string flowerColor);
	void setNumPetals(int numPetals);

	/*GETTERS*/
	string getFlowerColor();
	int getNumPetals();
	string getFlowerName();

protected:
	/*Variables are protected for public class inheritance.*/
	/*Variables are set to default values, which can be overriden with the set function.*/
	int numPetals = 7;
	string flowerName = "Any flower";
	string flowerColor = "Red";
};

/*Guards*/
#endif