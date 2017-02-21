//
//  noiseCluster.hpp
//  Week4CW3
//
//  Created by Kim on 2/13/17.
//
//

//DOES NOT NEED TO BE A SEPARATE CLASS, CAN JUST BE NORMAL IN ORIGINAL

#pragma once
#include "ofMain.h"

class NoiseCluster {
public:
    NoiseCluster();
    void orbit(ofVec2f center);
    float noiseColor (float xOff);
    void draw();
    void update();
    
    float speed, radius, orbitRadius;
    float x, y, theta;
    ofVec2f position;
    float xOff, start, inc;
    
    ofLight ambientLight;
};

