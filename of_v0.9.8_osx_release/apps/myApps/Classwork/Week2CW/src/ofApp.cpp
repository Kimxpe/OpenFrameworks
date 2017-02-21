#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   // a = ofVec2f(100, 100);
   // b = ofVec2f (800, 100);
   // c = ofVec2f (0, 0);
    
    position = ofVec2f (100, 400);
    initialVel = ofVec2f (1, -10);
    gravity = 9.8;
    acceleration = ofVec2f (0, gravity);
    friction = 0.9;
    velocity = ofVec2f (1,-20);
    radius = 20;

}

//--------------------------------------------------------------
void ofApp::update(){
    // dist = a.distance(b);
    // c = a.getMiddle(b);
    
    // PART 2
    
    time = ofGetElapsedTimef();
    // V = V1 + time * Acceleration
    
    velocity = initialVel + acceleration * time;
   
    
    // v = distance / time;
    // x2 - x1 / t2 - t1
    // position = position + velocity = time
    
    position += velocity;
    if (position.y >= ofGetWindowHeight() - radius) {
        position.y = ofGetWindowHeight() -1 - radius;
        //initialVel.y *= -1; //or write initialVel.y = initialVel.y * -1;
        
        initialVel.y = initialVel.y * -1 * friction;
        initialVel.x *= friction;
        ofResetElapsedTimeCounter();
        
    }
    
    radius = velocity.length(); //helps you represent speed

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofDrawCircle (a,10);
    //ofDrawCircle (b,10);
    //ofDrawLine (a,b);
    //ofDrawBitmapString (dist, 100, 100);
    
    ofSetBackgroundAuto(false); //true to refresh background/ false to not refresh
    ofSetColor (255, 0, 0, 100);
    ofDrawCircle (position, radius);
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
   // b = ofVec2f (x, y);
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
