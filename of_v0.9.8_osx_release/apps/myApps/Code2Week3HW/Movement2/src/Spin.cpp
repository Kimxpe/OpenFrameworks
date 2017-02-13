//
//  spin.cpp
//  Movement2
//
//  Created by Kim on 2/12/17.
//
//
#include "spin.hpp"

spin::spin(){
    x = 0;
    y = 0;
    
    theta = 0;
    r = 0;
    ang = 0;
    
    
    //col.set(226,226,226);
    
}

void spin::update () {
    
    x = r * sin(theta);
    y = r * cos(theta);
    
    theta += .2;
    r += .08;
    ang += 0.6;


}

void spin::draw () {
    ofSetColor(214, 221, 255, 40);
    ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    ofDrawLine(x, y, 0, 0);
}
