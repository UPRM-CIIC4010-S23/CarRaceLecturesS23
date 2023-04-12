#pragma once

#include "ofMain.h"
#include "Raceable.h"

class RaceableImplementation : public Raceable {

    private:
    int number;
    int xPos;
    int yPos;
    int speed; // Pixels per time slice (tick)
    int direction; // 1 -> left to right, -1 -> right to left
    int laps;
    int mileage;
    ofColor color;

    public:
        RaceableImplementation(int RaceableImplementationNo, int xPos, int yPos, int speed, int direction, ofColor c) {
            this->number = RaceableImplementationNo;
            this->xPos = xPos;
            this->yPos = yPos;
            this->speed = speed;
            this->direction = direction;
            this->color = c;
            laps = 0;
            mileage = 0;
        }

        // Seters and Getters
        int getNumber() const { return number; }
        int getXPos() const { return xPos; }
        int getYPos() const { return yPos; }
        int getSpeed() const { return speed; }
        int getDirection() const { return direction; }
        int getLaps() const { return laps; }
        int getMileage() const { return mileage; }
        ofColor getColor() { return color; }

        void setXPos(int newXPos) { xPos = newXPos; }
        void setYPos(int newYPos) { yPos = newYPos; }
        void setSpeed(int newSpeed) { speed = newSpeed; }
        void setDirection(int newDirection) { direction = newDirection; }
        void addLap() { laps++; }
        void addMileage(int delta) { mileage += delta; }

        void move(int deltaX, int deltaY);
        virtual void draw() = 0;
        virtual void draw(ofColor c) = 0;

};
