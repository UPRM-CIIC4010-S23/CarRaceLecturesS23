#pragma once

#include "ofMain.h"
#include "RaceableImplementation.h"

class Vehicle : public RaceableImplementation {

    public:
        Vehicle(int VehicleNo, int xPos, int yPos, int speed, int direction, ofColor c) : 
        RaceableImplementation(VehicleNo, xPos, yPos, speed, direction,c) {}

        virtual void draw() = 0;
        virtual void draw(ofColor c) = 0;

};
