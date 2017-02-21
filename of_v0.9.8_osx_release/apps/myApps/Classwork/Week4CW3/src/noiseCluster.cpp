//
//  noiseCluster.cpp
//  Week4CW3
//
//  Created by Kim on 2/13/17.
//
//

#include "noiseCluster.hpp"

NoiseCluster::NoiseCluster(){
    inc = 0.01;
    radius = 2;
    theta = 0;
    
}

void NoiseCluster::orbit(ofVec2f center){
    x = sin(theta) * orbitRadius + ofMap(ofNoise(theta), 0, 1, 0 , orbitRadius);
    y = cos(theta) * orbitRadius + ofMap(ofNoise(theta +100), 0, 1, 0, orbitRadius);
    
    position.set(center.x + x, center.y + y);
    
}

float NoiseCluster::noiseColor(float xOff){
    return ofMap(ofNoise(xOff),0,1,0,255);
}

void NoiseCluster::update(){
    theta += inc;
}

void NoiseCluster::draw(){
    ambientLight.enable();
    
    orbitRadius = ofMap(ofNoise(theta), 0,1, 0, 300);
    
    orbit( ofVec2f(ofGetWindowWidth()/2 - orbitRadius/2, ofGetWindowHeight()/2 - orbitRadius/2));
    
    ofSetColor(noiseColor(theta), noiseColor(theta + 10), noiseColor(theta + 100));
    
    ofDrawCircle(position,radius);
    
}
