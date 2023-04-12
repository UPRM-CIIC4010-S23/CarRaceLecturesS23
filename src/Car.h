#pragma once

#include "Vehicle.h"

class Car : public Vehicle {

    public:
        Car(int carNo, int xPos, int yPos, int speed, int direction, ofColor c):
        Vehicle(carNo, xPos, yPos, speed, direction, c) {}

        // void move(int deltaX, int deltaY);
        virtual void draw();
        virtual void draw(ofColor c);

};
