#include "ofApp.h"
#include "Car.h"
#include "PoliceCar.h"
#include "Truck.h"

//--------------------------------------------------------------
void ofApp::setup() {

    winnerFound = false;
    int laneY = 5;
    int carNumber = 0;
    for (int i=0; i<numCars; i++) {
        if (carNumber % 3 == 0) {
            raceCars.push_back(new PoliceCar(carNumber, 0,laneY,5,1, ofColor::green));
        } else if (carNumber % 3 == 1) {
            raceCars.push_back(new Car(carNumber, 0,laneY,5,1, ofColor::green));    
        } else {
            raceCars.push_back(new Truck(carNumber, 0,laneY,5,1, ofColor::green));
        }
        laneY += 35;
        carNumber++;
    }
}

//--------------------------------------------------------------
void ofApp::update(){

    if (winnerFound) return;

    for (auto it=raceCars.begin(); it != raceCars.end(); it++) {
        if ((((*it)->getDirection() == 1) && ((*it)->getXPos() + 60 >= ofGetWidth())) ||
            (((*it)->getDirection() == -1) && ((*it)->getXPos() <= 0))) { // Hardcoded width bad idea
            (*it)->setDirection(-1 * (*it)->getDirection());
            (*it)->addLap();
        } else {
            int distance = ofRandom(1) * (*it)->getSpeed() * (*it)->getDirection();
            (*it)->move(distance, 0);
            (*it)->addMileage(abs(distance));
        }
    }

    for (auto it=raceCars.begin(); it != raceCars.end(); it++) {
        if ((*it)->getLaps() == 2) {
            winnerFound = true;
            break;
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetBackgroundColor(ofColor::white);
    
    for (auto it=raceCars.begin(); it != raceCars.end(); it++) {
        (*it)->draw();
    }

    auto leaderPos = raceCars.begin();
    for (auto it=raceCars.begin(); it != raceCars.end(); it++) {
        if ((*it)->getMileage() > (*leaderPos)->getMileage()) {
            leaderPos = it;
        }
    }

    (*leaderPos)->draw(ofColor::orange);

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
