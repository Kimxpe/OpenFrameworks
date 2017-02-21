//
//  Moon.cpp
//  Week3CW2
//
//  Created by Kim on 2/6/17.
//
//

#include "Moon.hpp"

Moon::Moon(){


}

void Moon::orbit(ofVec3f center) {
    
    float x = cos(theta) * orbitRadius;
    float z = sin(theta) * orbitRadius;
    position.set (center.x + x, center.y, z);

}

void Moon::update(){
    theta += 0.05 * speed;


}

void Moon::draw(){
    //ofSetColor(255);
    ofDrawCircle(position, radius);


}
