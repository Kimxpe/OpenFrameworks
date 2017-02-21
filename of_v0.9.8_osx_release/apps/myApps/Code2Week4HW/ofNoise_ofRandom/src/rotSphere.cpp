//
//  rotSphere.cpp
//  ofNoise_ofRandom
//
//  Created by Kim on 2/21/17.
//
//

#include "rotSphere.hpp"

void rotSphere::setup(){
    ofEnableSmoothing();

}

void rotSphere::draw(){
    ambient.enable();
    
    ofTranslate(ofGetWindowWidth() * ofNoise(count + 80), ofGetWindowHeight() * ofNoise(count + 100));
    ofRotate(10 * ofNoise(count + 40));
    ofDrawSphere(0, 0, 100 * ofNoise(count), 100 * ofNoise(count));
    
    count += 0.01;
}
