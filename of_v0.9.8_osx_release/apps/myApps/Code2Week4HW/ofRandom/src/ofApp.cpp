#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetBackgroundAuto(false);
    
    haveNextDist = false;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float posX = dist();
    float length = ofGetWindowWidth()/2;
    float mean = ofGetWindowWidth()/2;
    
    posX = (posX * length) + mean;
    
    ofSetColor(146, 146, 185, 10);
    ofDrawRectangle(posX, ofRandomHeight(), 40,40);

}

float ofApp::dist(){
    if (haveNextDist) {
        haveNextDist = false;
        return haveNextDist;
    } else {
        float p1, p2, s;
        do {
            p1 = 5 * ofRandomf() -1;
            p2 = 2 * ofRandomf() - 1;
            s = p1 * p1 + p2 * p2;
        }
        while (s >= 1 || s == 0);
        
        float mult = 1;
        haveNextDist = p2 * mult;
        haveNextDist = true;
        
        return p1 * mult;
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
