//
//  Star.cpp
//  Code2MidtermHW3
//
//  Created by Kim on 4/3/17.
//
//

#include "Star.hpp"

void stars::setup() {
    c = ofColor(ofRandom(0, 255));
    size = ofRandom(.1,2);
    xpos = ofRandom(1,ofGetWindowWidth());
    ypos = ofRandom(1,ofGetWindowHeight());
    yspeed = ofRandom(0,.3);
    xspeed = yspeed + ofRandom(0,.5);
    int v = 9;

}

void stars::display () {
    ofRectMode (OF_RECTMODE_CENTER);
    //ofFill(c);
    ofDrawRectangle((xpos - ofGetMouseX()/v), (ypos - ofGetMouseY()/v), size, size));
}

void stars::orbit() {



}
