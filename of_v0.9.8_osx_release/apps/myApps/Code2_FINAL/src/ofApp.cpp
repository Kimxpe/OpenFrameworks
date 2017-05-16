#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //other
    ea = 0.05;
    r = 300;
    
    song.load("Tourist - Your Girl.mp3");
    song.play();

    song.setLoop(true);
   
    ofHideCursor();
    width = ofGetWindowWidth()/2;
    height = ofGetWindowHeight()/2;
    diam = TWO_PI/10;
    
    ofEnableSmoothing();
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground (0);
    ofSetColor(200,100);
    
    ofNoFill();

    //counter += 1;
    
    //ofNoFill();
    //ofRotate(counter);
    
    //other
    float target_x = ofMap (width - mouseX, 0 , width, 0, 100);
    float d_x = target_x - c_X;
    c_X += d_x * ea;
    
    float target_y = ofMap (height - mouseY, 0, height, 0, 100);
    float d_y = target_y - c_Y;
    c_Y += d_x * ea;
    
    ofTranslate (width, height);
    ofRotateX (cos(c_Y) * 80);
    ofRotateY (sin(c_X) * 80);
    
    for (float a = 0; a < PI; a += diam) {
        c_a = cos(a);
        s_a = sin(a);
        
        for (float e = 0; e < TWO_PI; e += diam) {
            c_e = cos(e);
            s_e = sin(e);
            ofDrawLine(0,0,0,r * c_e * s_a, r * s_e * s_a, r * c_a);

            
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
