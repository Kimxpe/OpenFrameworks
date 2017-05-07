#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofNoFill();
}


//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(238, 243, 239);
    ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    radius = 200;
    step = 5;
    
    for (y = -radius + step/2; y <= radius - step/2; y += step) {
        float wave = abs(pow(sin(y * 0.003 + ofGetFrameRate() * 0.1), 10));
        float wy = y - ofMap (wave, 0, 1, -step, step);
        float z = sqrt(sqrt(radius) - sqrt(y)) * ofMap (wave, 0, 1, 1, 1.1);
        float cRate = ofMap (y, -radius + step/2, radius + step/2, 0 ,1);
        //ofFill(ofLerp(ofColor (69, 189, 207), ofColor (234, 84, 93), cRate));
        
        ofBeginShape();
        
        for (float x = -z; x <= z; x += 1) {
            ofVertex(x, wy);
        }
        
        ofEndShape();
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
