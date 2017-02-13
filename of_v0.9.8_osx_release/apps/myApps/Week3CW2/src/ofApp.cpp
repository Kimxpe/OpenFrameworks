#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    sun.set(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    
    for (int i = 0; i < NUMPLANETS; i++) {
        planet[i].theta = TWO_PI/NUMPLANETS + i;
        planet[i].speed = 10;
        planet[i].radius = 20 + i;
        planet[i].orbitRadius = 200;
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < NUMPLANETS; i++) {
        planet[i].orbit(sun);
        planet[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(179, 175, 224);
    ofDrawCircle(sun, 50);
    ofSetColor(255, 0, 0);
    for (int i = 0; i < NUMPLANETS; i++){
        planet[i].draw();
    }
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
