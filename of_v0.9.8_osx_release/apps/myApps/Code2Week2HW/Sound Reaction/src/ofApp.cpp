#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(240);
    background.load("poly-4.jpg");
    movingIcon.load("triangle3.png");
    song.load("Robert Chacon feat. Robertha Sepulveda - Redshift.mp3");
    song.play();
    
    fftSmooth = new float [8192];
    for (int i = 0; i < 8192; i++) {
        fftSmooth[i] = 0;
    }
    
    bands = 30;
    
    song.setLoop(true);

}

//--------------------------------------------------------------
void ofApp::update(){
    ofSoundUpdate();
    
    float * value = ofSoundGetSpectrum(bands);
    for (int i = 0; i < bands; i++) {
        fftSmooth[i] *= 0.3f;
        if (fftSmooth[i] < value [i]) {
            fftSmooth[i] = value[i];
        }
    }


}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(216, 221, 255);
    background.draw(0, 0, 1300, 800);
    ofSetColor(0);
    for (int i = 0; i < bands; i++){
       // movingIcon.draw (ofGetWidth()/12, ofGetHeight()/12, -(fftSmooth[i]*100));
        //ofDrawSphere(ofGetWidth()/2, ofGetHeight()/2, -(fftSmooth[i]*120));
        ofDrawCone(ofGetWidth()/2, ofGetHeight()/2, -(fftSmooth[i]*160), (fftSmooth[i]*260));
        //ofDrawCone(ofGetWidth()/2, ofGetHeight()/2, (fftSmooth[i]*140), -(fftSmooth[i]*180));
        
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
