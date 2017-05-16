#include "Star.hpp"

Star::Star(){
    z = ofRandom(ofGetWindowWidth());
    reset();
    
    speed = 8;
    movingSpeed = 2;
}
//Star::~Star(){
//}

void Star::reset(){
    x = (int)ofRandom(-ofGetWindowWidth()/2, ofGetWindowWidth()/2);
    y = (int)ofRandom(-ofGetWindowHeight()/2, ofGetWindowHeight()/2);
    p_z = z;
    
    
}

bool timeToReset () {
    int z = ofRandom(ofGetWindowWidth());
    
    if (z < 1) {
        return true;
    } else {
        return false;
   }
}

void Star::move(){
    z = z - speed;
    
    if(timeToReset()) {
        z = ofGetWindowWidth();
        reset();
    }
}

void Star::show(){
    float size;
    
    ofSetColor(255);
    
    s_x = ofMap(x / z, 0, 1, 0, ofGetWindowWidth());
    s_y = ofMap(y / z, 0, 1, 0, ofGetWindowHeight());
    
    size = (int) ofMap(z, 0, ofGetWindowWidth(), 10, 1);
    
    ofDrawEllipse(s_x, s_y, size, size);
    
    p_x = ofMap(x / p_z, 0, 1, 0, ofGetWindowWidth());
    p_y = ofMap(y / p_z, 0, 1, 0, ofGetWindowHeight());
    
    p_z = z;
    ofDrawLine(p_x, p_y, s_x, s_y);
}

void Star::moving_Left() {
    x = x + movingSpeed;
}

void Star::moving_Right() {
    x = x - movingSpeed;
}

void Star::moving_Up() {
    y = y + movingSpeed;
}

void Star::moving_Down() {
    y = y - movingSpeed;
}











