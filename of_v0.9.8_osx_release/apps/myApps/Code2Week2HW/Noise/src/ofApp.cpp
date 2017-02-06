#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(240);
    
   }

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(190, 183, 229);
    float time = ofGetElapsedTimef();
    for (int i = 0; i < 100; i++) {
        float width = ofGetWidth();
        float height = ofGetHeight();
        float speed = 0.6;
        float pX = i * 13.2;
        float pY = i * 19.2;
        
        float x = width * ofNoise(time * speed + pX);
        float y = height * ofNoise(time * speed + pY);
        ofDrawCone(x, y, 20, 20);
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
