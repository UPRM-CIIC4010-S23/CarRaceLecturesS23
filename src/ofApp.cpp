#include "ofApp.h"
#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

    if (((car1.getDirection() == 1) && (car1.getXPos() + 60 >= ofGetWidth())) ||
        ((car1.getDirection() == -1) && (car1.getXPos() <= 0))) { // Hardcoded width bad idea
        car1.setDirection(-1 * car1.getDirection());
    } else {
        car1.move(car1.getSpeed() * car1.getDirection(), 0);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    // Car c1(0,0);
    this->car1.draw();
    // Car c2(100,100);
    // c2.draw();

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
