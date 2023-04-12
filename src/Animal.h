#pragma once
#include "ofMain.h"
#include "RaceableImplementation.h"

class Animal : public RaceableImplementation {
    public:
    Animal(int RaceableImplementationNo, int xPos, int yPos, int speed, int direction, ofColor c) :
        RaceableImplementation(RaceableImplementationNo, xPos, yPos, speed, direction,c) {}

    virtual void eat() = 0;
    virtual void call() = 0;

    virtual void draw() = 0;
    virtual void draw(ofColor c) = 0;

};
