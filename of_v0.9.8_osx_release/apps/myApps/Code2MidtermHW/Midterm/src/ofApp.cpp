#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    //ofSetFrameRate(7);
    
    //ofSetColor(255);
    
    for (int i = 0; i < AMOUNT; i++) {
        x[i] = int (ofRandom(-500,500));
        y[i] = int (ofRandom(-500,500));
        z[i] = int (ofRandom(-500,500));
    }
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
 
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(170,60);
    
    ofNoFill();
    ofPushMatrix();
    ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    //ofRotateX(ofGetFrameRate());
    ofRotateX(mouseX/4);
    ofRotateY(mouseY/4);
    //ofRotateZ(ofGetFrameRate()/10);
    ofDrawSphere(120);
    ofPopMatrix();
    
    ofFill();
    
    ofSetColor(255);
    
    ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    
    ofRotateY(ofGetFrameRate());
    for (int i=0; i < AMOUNT; i++) {
        ofDrawSphere(x[i], y[i], z[i],.9);
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
