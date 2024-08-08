/* Incude items. */
#include<iostream>
#include<string>
#include<cmath>
#include"Flower.h"

/*Guards.*/
#ifndef CARNIVEROUS_H
#define CARNIVEROUS_H

/*Carniverous inherits from flower only, and adds the food functionality.*/

/*Namespace*/
using namespace std;

/*Class*/
class Carniverous : public Flower {
public: 
	/*Constructor: Parameters.*/

	Carniverous(string food, string name);

	/*Getters*/
	string getFood();

	/*Setters*/
	void setFood(string newFood);

private:
	string food;
};


/*Guards*/
#endif
