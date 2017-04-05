//
//  particle.cpp
//  Midterm
//
//  Created by Kim on 3/12/17.
//
//

#include "particle.hpp"
#include "ofMain.h"

void particle::setup () {
    //ofSetFrameRate(7);
    
    //ofSetColor(255);
    
    for (int i = 0; i < AMOUNT; i++) {
        x[i] = int (ofRandom(-500,500));
        y[i] = int (ofRandom(-500,500));
        z[i] = int (ofRandom(-500,500));
    }

}

void particle::draw () {
    
    ofFill();
    
    ofSetColor(255,20);
    
    
    ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    
    counter += 1;
    
    ofNoFill();
    ofRotateY(counter);
    ofDrawSphere(120);
    for (int i=0; i < AMOUNT; i++) {
        ofDrawSphere(x[i], y[i], z[i],.9);
    }

}
