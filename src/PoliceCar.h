#pragma once
 #include "ofMain.h"
 #include "Car.h"

 using namespace std;
 
class PoliceCar : public Car {

    private:
        int unit;

    public:
        PoliceCar(int carNo, int xPos, int yPos, int speed, int direction, ofColor c) : 
        Car(carNo, xPos, yPos, speed, direction, c) {}

        virtual void draw();
        virtual void draw(ofColor c);

};
