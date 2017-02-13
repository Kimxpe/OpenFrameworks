#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(224);
    ofEnableSmoothing();
   // ofSetVerticalSync(true);
    
    r = ofGetWindowHeight()/2.6;
    theta = 0;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float speed = 80;
    float amp = 200;
    float a = r * sin(theta);
    float b = r * cos(theta);
    
    float x = amp * cos(PI * ofGetFrameNum() / speed);
    ofSetLineWidth(5);
    ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    
    ofSetColor(117, 136, 165);
    ofDrawLine(0, 0, 0, x);
    ofDrawLine(0, 0, a, b);
 
    ofSetColor(198, 145, 195);
    ofDrawCircle(0, x, 40);
    ofDrawCircle(a, b, 30);
    
    theta += .04;
    
    
    

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
