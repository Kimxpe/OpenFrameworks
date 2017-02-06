#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(240);
    ofSetFrameRate(60);
    
    gui.setup();
    gui.add(rotateX.set("x",0.0, 0.0, 5.0));
    gui.add(rotateY.set("y",0.0, 0.0, 5.0));
    gui.add(rotateZ.set("z",0.0, 0.0, 5.0));
    
    rotX = 0.0;
    rotY = 0.0;
    rotZ = 0.0;

}

//--------------------------------------------------------------
void ofApp::update(){
    rotX += rotateX;
    rotY += rotateY;
    rotZ += rotateZ;
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofRotateX(rotX);
    ofRotateY(rotY);
    ofRotateZ(rotZ);

   // ofSetColor(126, 124, 186);
    //ofSetColor(176, 124, 186);
    ofSetColor(124, 154, 186);
   // ofDrawBox(-300, 0, 130);
    ofDrawBox(-150, 150, 150);
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
