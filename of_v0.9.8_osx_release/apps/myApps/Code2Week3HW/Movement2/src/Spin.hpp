//
//  spin.hpp
//  Movement2
//
//  Created by Kim on 2/12/17.
//
//

#pragma once
#include "ofMain.h"

class spin {
public:
    spin();
    void update();
    void draw();
    
private:
    float r = 0;
    float theta = 0;
    float x, y;
    float ang = 0;
    
};
