#pragma once
#include <iostream>
#include "Animal.h"
#include "Raceable.h"

using namespace std;

class Frog : public Animal {

    private:
    ofImage image;

    public:
    Frog(int RaceableImplementationNo, int xPos, int yPos, int speed, int direction, ofColor c) : 
        Animal(RaceableImplementationNo, xPos, yPos, speed, direction,c) {

            image.load("frog.png");

        }

    virtual void eat() { cout << "Eating" << endl; }
    virtual void call() { cout << "Coquí" << endl; }

    virtual void draw();
    virtual void draw(ofColor c);

};
