#pragma once

class Car {

    private:
    int xPos;
    int yPos;

    public:
    Car(int xPos, int yPos) { this->xPos = xPos; this->yPos = yPos; }
    void draw();

};
