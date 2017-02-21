#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //cout << ofRandom(100) << endl;
//    scale = 10; //scale = 1 for closer to tv          noise
//    cols = floor (ofGetWindowWidth()/scale);
//    rows = floor (ofGetWindowHeight()/scale);
    inc = 0.01; //0.001 //0.0001
    
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // SECOND CODE
    //x = ofRandom(ofGetWindowWidth());
    
    //x = ofMap (ofSignedNoise(ofGetElapsedTimef()), -1, 1, 0, ofGetWindowWidth());
    //OTHER VERSION OF NOISE
    //x = ofMap (ofNoise(ofGetElapsedTimef()), 0, 1, 0, ofGetWindowWidth());

    //y = ofMap (ofNoise (ofGetElapsedTimef() + 1000), 0, 1, 0, ofGetWindowHeight());
    
}

//--------------------------------------------------------------
void ofApp::draw(){

//    for (int y = 0; y < rows; y++ ) {
//        for (int x = 0; x < cols; x++ ) {
//            ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
//            ofDrawRectangle(x * scale, y * scale, scale, scale);
//            
//        }
//    }
    
    ofSetBackgroundColor(0);
  
    //SECOND CODE
    //ofDrawCircle(x, y, 20);
    
    ofBeginShape();
    ofNoFill();
    
    xOff = start;
    for (int i = 0; i < ofGetWindowWidth(); i++ ) {
        x = i;
        float noise = ofNoise(xOff);
        y = ofMap (noise, 0, 1, 0, ofGetWindowHeight());
        ofVertex(x, y);
        xOff += inc;
    }
    start += inc;
    
    ofEndShape();
    
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
