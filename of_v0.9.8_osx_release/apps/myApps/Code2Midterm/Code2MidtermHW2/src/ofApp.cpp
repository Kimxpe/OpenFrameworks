#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofNoFill();
    
}

//--------------------------------------------------------------
void ofApp::update(){
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground (73, 116, 209);
    for (float i = 0; ofGetWindowHeight() + ylines > i; i += ylines) {
        ofBeginShape();
        ofVertex(0, i);
        
        for (float j = 0; j < ofGetWindowWidth() + xlines; j += xlines) {
            x2 = j / 234;
            y2 = i / 165;
            y = ofMap(ofNoise (x2, y2, z2), 0, 1, -80, 80) + i;
            ofCurveVertex(j, y);
        }
        
        ofVertex(ofGetWindowWidth(), i);
        ofEndShape();
    }
    z2 += .01;
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
