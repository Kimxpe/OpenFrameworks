#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    speed = 8;
    movingSpeed = 2;
    
    bool w = false;
    bool a = false;
    bool s = false;
    bool d = false;
    bool add = false;
    bool sub = false;
   
    //Processing VERSION - ask Miri??
    //for (int i = 0; i < STARS; i++) {
        //stars[i] = new Star();
   // }

}

//--------------------------------------------------------------
void ofApp::update(){
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    ofBackground(0);
    
//    for (int i = 0; i < 1; i++) {
//        stars.move();
//        stars.show();
//        
//        if (a) {
//            stars.moving_Left();
//        }
//        
//        if (d) {
//            stars.moving_Right();
//        }
//        if (w) {
//            stars.moving_Up();
//        }
//        if (s) {
//            stars.moving_Down();
//        }
//    }

    
    for (int i = 0; i < STARS; i++) {
        stars[i].move();
        stars[i].show();
        
        if (a) {
            stars[i].moving_Left();
        }
        
        if (d) {
            stars[i].moving_Right();
        }
        if (w) {
            stars[i].moving_Up();
        }
        if (s) {
            stars[i].moving_Down();
        }
    }
    
    if (add) {
        speed = speed + 0.1;
        
        if (speed >= 24) {
            speed = 24;
        }
    }
    
    if (sub) {
        speed = speed - 0.1;
        
        if (speed <= 0.5) {
            speed = 0.5;
        }
    }
    
}
    
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
   
    if (key == 'w') {
        w = true;
    }
    
    if (key == 'a') {
        a = true;
    }
    
    if (key == 's') {
        s = true;
    }
    
    if (key == 'd') {
        d = true;
    }
    
    if (key == '+') {
        add = true;
    }
    
    if (key == '-') {
        sub = true;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    if (key == 'w') {
        w = false;
    }
    
    if (key == 'a') {
        a = false;
    }
    
    if (key == 's') {
        s = false;
    }
    
    if (key == 'd') {
        d = false;
    }
    
    if (key == '+') {
        add = false;
    }
    
    if (key == '-') {
        sub = false;
    }
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
