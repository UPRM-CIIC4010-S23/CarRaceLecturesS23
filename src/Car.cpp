#include "ofMain.h"

#include "Car.h"

using namespace std;

void Car::move(int deltaX, int deltaY){
    this->xPos += deltaX;
    this->yPos += deltaY;
}

void Car::draw() {
    this->draw(this->getColor());
}

void Car::draw(ofColor c) {

    int xPos = this->xPos;
    int yPos = this->yPos;
    ofSetColor(c);
    // Draw body
    ofDrawRectangle(xPos, yPos+10,60,10);
    // Draw roof
    ofDrawLine(xPos+10,yPos+10,xPos+20,yPos+0);
    ofDrawLine(xPos+20,yPos+0,xPos+40,yPos+0);
    ofDrawLine(xPos+40,yPos+0,xPos+50,yPos+10);
    // Draw tires
    ofDrawCircle(xPos+15,yPos+25,5);
    ofDrawCircle(xPos+45,yPos+25,5);

    //Draw car number
    ofSetColor(ofColor::black);
    ofDrawBitmapString(this->getCarNo(), xPos+25,yPos+20);

}