//
//  Particle.hpp
//  Particles
//
//  Created by Kim on 5/7/17.
//
//

#include "ofApp.h"

class particle {
public:
    void update();
    void draw();
    void addForce();
    void resetForce();
    void addDampingForce();
    
    float frc;
    float vel;
    float pos;
    

};

