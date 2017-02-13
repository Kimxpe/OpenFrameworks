//
//  Planet.cpp
//  Week3CW2
//
//  Created by Kim on 2/6/17.
//
//

#include "Planet.hpp"

Planet::Planet() {
    //theta = 0;
    myMoon.orbitRadius = 50;
    myMoon.radius = 25;
    myMoon.theta = 0;
    myMoon.speed = 2;

}

void Planet::update(){
    theta += (0.001 * speed);
    myMoon.update();
    
}

void Planet::orbit(ofVec2f reference){
    
    float x = cos(theta) * orbitRadius;
    float y = sin(theta) * orbitRadius;
    position.set(reference.x + x, reference.y + y);

    myMoon.orbit(position);
}

void Planet::draw(){
    
    ofDrawCircle(position, radius);
    ofSetColor(255);
    myMoon.draw();

}
