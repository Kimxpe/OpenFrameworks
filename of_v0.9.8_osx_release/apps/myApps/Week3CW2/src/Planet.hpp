//
//  Planet.hpp
//  Week3CW2
//
//  Created by Kim on 2/6/17.
//
//
#pragma once
//pragma once is saying to only include file once, gets rid of unneccesary lag

#include "ofMain.h"
#include "Moon.hpp"

class Planet {
public: //allows to be accessed from other places
    Planet();
    void update();
    void orbit(ofVec2f reference);
    void draw();
    
    ofVec2f position;
    ofVec2f reference;
    float radius;
    float orbitRadius;
    float speed;
    float theta;
    
    Moon myMoon;
    
};
