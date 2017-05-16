#pragma once

//#include "ofMain.h"
#include "ofApp.h"

class Star {
public:
    
    Star();
//    ~Star();
    
    int speed;
    int movingSpeed;
    
    int x;
    int y;
    float z;
    float s_x;
    float s_y;
    float p_z;
    float p_x;
    float p_y;
        
    void reset();
    void move();
    void show();
    void moving_Left();
    void moving_Right();
    void moving_Up();
    void moving_Down();
    
    bool timeToReset();
    

};
