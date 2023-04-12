#include "ofMain.h"

#include "Frog.h"

using namespace std;



void Frog::draw() {
    this->draw(this->getColor());
}

void Frog::draw(ofColor c) {

    image.draw(this->getXPos(), this->getYPos(), 40, 40);

}