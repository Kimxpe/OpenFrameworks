#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    //ofVec2f a;
    //ofVec2f b;
    //ofVec2f c;
    //ofVec2f norm;
    //float dist;
    
    //or say ofVec2f a, b, c;
    
    ofVec2f position;
    ofVec2f velocity;
    ofVec2f acceleration;
    ofVec2f initialVel;
    
    float friction;
    float time;
    float gravity;
    float radius;
};