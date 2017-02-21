//
//  rotSphere.hpp
//  ofNoise_ofRandom
//
//  Created by Kim on 2/21/17.
//
//

#pragma once

#include "ofMain.h"
#include "rotSphere.hpp"

class rotSphere {
public:
    void draw();
    void setup();
    
    float count;
    ofLight ambient;
};
