#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    scale = 30;
    cols = floor(ofGetWindowWidth() / scale);
    rows = floor(ofGetWindowHeight() / scale);
    inc = 0.01;
    lost.load("Veorra - Not Yet.mp3");
    lost.play();
    lost.setLoop(2);
    
    fftSmoothed = new float[8192];
    for (int i = 0; i < 8192; i++) {
        fftSmoothed[i] = 0;
    }
    
    nBandsToGet = 128;
    
    
    material.setShininess(124);
}

//--------------------------------------------------------------
void ofApp::update(){
    //x = ofMap(ofNoise(ofGetElapsedTimef()), 0,1, 0, ofGetWindowWidth());
    ///y = ofMap(ofNoise(ofGetElapsedTimef()+500), 0, 1, 0, ofGetWindowHeight());
    //z = ofMap(ofNoise(ofGetElapsedTimef() + 250), 0, 1, 0, ofGetWindowHeight());
    siz = ofMap(ofNoise(ofGetElapsedTimef() + 100), 0, 1, 10, 100);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ambientLight.enable();
    ambientLight.setPosition(cos(ofGetElapsedTimef()*1.5) * ofGetWidth()/2,
                             sin(ofGetElapsedTimef()*1.5f) * ofGetWidth()/2,
                             cos(ofGetElapsedTimef()*.2) * ofGetWidth());
    ofBackground(0);
    float width = (float)(5 * 128) / nBandsToGet;
    for (int i = 0; i < nBandsToGet; i++) {
        ofSetColor(ofRandom(i), ofRandom(i), ofRandom(i));
        
    }
    for (int y = 0; y < rows; y++) {
        for (int x = 0; x < cols; x++) {
            for (int z = 0; z < cols; z++) {
                //ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
                ofDrawSphere(x*scale, y* scale, z*scale,20);
            }
        }
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
    ofDrawCircle(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2, 100, 100);
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
