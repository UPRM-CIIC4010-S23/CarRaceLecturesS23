#include "ofMain.h"

#include "PoliceCar.h"

using namespace std;

// void PoliceCar::move(int deltaX, int deltaY){
//     this->xPos += deltaX;
//     this->yPos += deltaY;
// }

void PoliceCar::draw() {
    this->draw(this->getColor());
}

void PoliceCar::draw(ofColor c) {

    int xPos = this->getXPos();
    int yPos = this->getYPos();
    
    Car::draw(c);
    // ofSetColor(c);
    // // Draw body
    // ofDrawRectangle(xPos, yPos+10,60,10);
    // // Draw roof
    // ofDrawLine(xPos+10,yPos+10,xPos+20,yPos+0);
    // ofDrawLine(xPos+20,yPos+0,xPos+40,yPos+0);
    // ofDrawLine(xPos+40,yPos+0,xPos+50,yPos+10);
    // // Draw tires
    // ofDrawCircle(xPos+15,yPos+25,5);
    // ofDrawCircle(xPos+45,yPos+25,5);

    // //Draw car number
    // ofSetColor(ofColor::black);
    // ofDrawBitmapString(this->getCarNo(), xPos+25,yPos+20);

    // Draw biombo
    ofSetColor(ofColor::blue);
    ofDrawCircle(xPos+28,yPos-4,4);

}