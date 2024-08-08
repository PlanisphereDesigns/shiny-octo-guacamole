#ifndef ANNUAL_H
#define ANNUAL_H
/*Guards*/

/*Includes*/
#include"Flower.cpp"
#include "Flower.h"
#include<iostream>
#include <string>

/*Set namespace.*/
using namespace std;

/*Inherited class: Annual.*/
class Annual : public Flower {
public:
	/*CONSTRUCTORS*/
	/*Default, with parameters.*/
	Annual(string flowerName, int numberOfFlowers);
	/*Setters*/
	void setNumberOfFlowers(int numberOfFlowers);
	/*Getters*/
	int getNumberOfFlowers();
	int getNumberOfYears();

private:
/*An annual flower in this class lives for one year.*/
	int years = 1;
	int flowers;
};

/*Guards*/
#endif