//
//  Star.hpp
//  Code2MidtermHW3
//
//  Created by Kim on 4/3/17.
//
//
#pragma once

#include "Star.hpp"
#include "ofApp.h"

class stars {
public:
    ofColor c;
    float xpos;
    float ypos;
    float xspeed;
    float yspeed;
    float size;
    
    void setup ();
    void display ();
    void orbit ();
    
};
