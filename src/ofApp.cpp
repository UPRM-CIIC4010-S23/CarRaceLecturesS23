#include "ofApp.h"
#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup(){

    winnerFound = false;
    int laneY = 0;
    int carNumber = 0;
    for (int i=0; i<numCars; i++) {
        raceCars.push_back(Car(carNumber, 0,laneY,5,1, ofColor::green));
        laneY += 35;
        carNumber++;
    }

}

//--------------------------------------------------------------
void ofApp::update(){

    if (winnerFound) return;

    for (int i = 0; i < raceCars.size(); i++) {
        if (((raceCars[i].getDirection() == 1) && (raceCars[i].getXPos() + 60 >= ofGetWidth())) ||
            ((raceCars[i].getDirection() == -1) && (raceCars[i].getXPos() <= 0))) { // Hardcoded width bad idea
            raceCars[i].setDirection(-1 * raceCars[i].getDirection());
            raceCars[i].addLap();
        } else {
            int distance = ofRandom(1) * raceCars[i].getSpeed() * raceCars[i].getDirection();
            raceCars[i].move(distance, 0);
            raceCars[i].addMileage(abs(distance));
        }
    }

    for (int i=0; i<raceCars.size(); i++) {
        if (raceCars[i].getLaps() == 2) {
            winnerFound = true;
            break;
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i=0; i<raceCars.size(); i++) {
        this->raceCars[i].draw();
    }

    int leaderPos = 0;
    for (int i=1; i<raceCars.size(); i++) {
        if (raceCars[i].getMileage() > raceCars[leaderPos].getMileage()) {
            leaderPos = i;
        }
    }

    raceCars[leaderPos].draw(ofColor::orange);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
