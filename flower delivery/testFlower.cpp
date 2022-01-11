// testFlower.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Florist.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
class Person;
void clear(std::vector<Person*> vector);
int main()
{
    std::vector<std::string> flower = {"Roses","Violets","Gladiolus"};
    std::vector<Person*> personToClear;
    Person* chris = new Person("Chris");
    personToClear.push_back(chris);
    Person* robin = new Person("Robin");
    personToClear.push_back(robin);
    Gardener* garett = new Gardener("Garett");
    personToClear.push_back(garett);
    Grower* Gray = new Grower("Gray", garett);
    personToClear.push_back(Gray);
    Wholesaler* watson = new Wholesaler("Watson", Gray);
    personToClear.push_back(watson);
    FlowerArranger * flora = new FlowerArranger("Flora");
    personToClear.push_back(flora);
    DeliveryPerson* dylan = new DeliveryPerson("Dylan");
    personToClear.push_back(dylan);
    Florist* fred = new Florist("Fred", watson, flora,dylan);
    personToClear.push_back(fred);
    chris->orderFlowers(fred, robin, flower);
    fred->acceptOrder(robin, flower);

    clear(personToClear);
}
void clear(std::vector<Person*> personToClear) {
    for (auto person : personToClear)
        delete person;
    personToClear.clear();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
