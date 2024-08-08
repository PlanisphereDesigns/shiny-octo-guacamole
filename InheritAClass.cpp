// InheritAClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<string>
#include<cmath>
#include<iostream>

/*Include files.*/
#include "Flower.h"
#include "Flower.cpp"
#include "Carniverous.h"
#include "Carniverous.cpp"
#include "Annual.h"
#include "Annual.cpp"

/*Set the namespace.*/
using namespace std;

int main()
{
    cout << "Welcome to the inherited class constructor!\n";
    cout << "The Flower class is the base class, and the Carniverous and Annual classes inherit from it." << endl;
    Flower myFlower1("Petunia");
    Flower myFlower2("Irises");
    myFlower2.setFlowerColor("Orange");
    myFlower1.setFlowerColor("Red");
    cout << "The color of the " << myFlower1.getFlowerName() << " is " << myFlower1.getFlowerColor() << "!" << endl;
    cout << "The color of the " << myFlower2.getFlowerName() << " is " << myFlower2.getFlowerColor() << "!" << endl;
    
    /*Make a new carniverous plant.*/

    Carniverous myCarniverous("Flies", "Venus Fly Trap");

    /*Make a new annual plant.*/

    Annual myAnnualPlant("Marigold", 6);
    cout << "The annual plant " << myAnnualPlant.getFlowerName() << " lives for " <<
        myAnnualPlant.getNumberOfYears() << " year(s) and has " << myAnnualPlant.getNumberOfFlowers() <<
        " flowers!" << endl;
}

