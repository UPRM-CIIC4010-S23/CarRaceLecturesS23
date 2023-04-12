#pragma once

#include "ofMain.h"

class Raceable {

    public:

        // Seters and Getters
        virtual int getNumber() const = 0;
        virtual int getXPos() const = 0;
        virtual int getYPos() const = 0;
        virtual int getSpeed() const = 0;
        virtual int getDirection() const = 0;
        virtual int getLaps() const = 0;
        virtual int getMileage() const = 0;
        virtual ofColor getColor() = 0;

        virtual void setXPos(int newXPos) = 0;
        virtual void setYPos(int newYPos) = 0;
        virtual void setSpeed(int newSpeed) = 0;
        virtual void setDirection(int newDirection) = 0;
        virtual void addLap() = 0;
        virtual void addMileage(int delta) = 0;

        virtual void move(int deltaX, int deltaY) = 0;
        virtual void draw() = 0;
        virtual void draw(ofColor c) = 0;

};
