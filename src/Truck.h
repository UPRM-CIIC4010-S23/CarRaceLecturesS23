#pragma once
#include "ofMain.h"
#include "Vehicle.h"

class Truck : public Vehicle {

    // private:
    // int TruckNo;
    // int xPos;
    // int yPos;
    // int speed; // Pixels per time slice (tick)
    // int direction; // 1 -> left to right, -1 -> right to left
    // int laps;
    // int mileage;
    // ofColor color;

    public:
        Truck(int TruckNo, int xPos, int yPos, int speed, int direction, ofColor c):
        Vehicle(TruckNo, xPos, yPos, speed, direction, c) {}

        // void move(int deltaX, int deltaY);
        virtual void draw();
        virtual void draw(ofColor c);

};
