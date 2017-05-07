#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    image.load("Bird1.jpg");
    
    
    mesh.setMode(OF_PRIMITIVE_POINTS);
    float intThres = 200.0;
    
    int width = image.getWidth();
    int height = image.getHeight();
    
    for (int x = 0; x < width; x++) {
        for (int y = 0; y < height; y++) {
            
            ofColor c = image.getColor(x, y);
            
            float level = c.getLightness();
            
            if (level >= intThres) {
                
                float sat = c.getSaturation();
                float z = ofMap(sat, 0, 255, -100, 100);
                ofVec3f position_1(x * 4, y * 4, z);
                mesh.addVertex(position_1);
                mesh.addColor(c);
                
                if (c.getLightness() > intThres) {
                    
                    ofVec3f position_2(x * 2, y * 2);
                    mesh.addVertex(position_2);
                    mesh.addColor(c);
                }
            }
        }
    }
    
    
    mesh.setMode(OF_PRIMITIVE_LINES);
    float connectDist = 60;
    int numVerticles = mesh.getNumVertices();
    
    for (int i = 0; i < numVerticles; i++) {
        
        ofVec3f vert_i = mesh.getVertex(i);
        
        for (int j = i + 1; j < numVerticles; j++) {
            
            ofVec3f vert_j = mesh.getVertex(j);
            float distance = vert_i.distance(vert_j);
            
            if (distance <= connectDist) {
                mesh.addIndex(i);
                mesh.addIndex(j);
            }
        }
    }
  
}

//--------------------------------------------------------------
void ofApp::update(){
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(20, 20, 20);
    
    ofColor centerColor = ofColor(85, 78, 68);
    ofColor edgeColor(0, 0, 0);
    
    easyCam.begin();
    ofPushMatrix();
    ofTranslate(-ofGetWidth()/2, -ofGetHeight()/2);
    mesh.draw();
    ofPopMatrix();
    easyCam.end();
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
