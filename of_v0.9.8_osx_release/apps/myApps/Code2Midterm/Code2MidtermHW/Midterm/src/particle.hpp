//
//  particle.hpp
//  Midterm
//
//  Created by Kim on 3/12/17.
//
//

#pragma once

#define AMOUNT 1000

#include "ofMain.h"

class particle {
public:
    int x[AMOUNT];
    int y[AMOUNT];
    int z[AMOUNT];
    
    int counter;
    
    void setup();
    void draw();
    
    
};

