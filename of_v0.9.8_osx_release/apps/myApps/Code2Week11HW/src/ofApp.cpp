#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    image.load("Bird2.jpg");
    image.resize(300,300);
    
    mesh.setMode(OF_PRIMITIVE_POINTS);
    float intThres = 200.0;
    
    //ofSetFrameRate(60);
    
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
                
                offset.push_back(ofVec3f(ofRandom(0,1), ofRandom(0,1), ofRandom(0,1)));

                
            }
        }
    }

    mesh.setMode(OF_PRIMITIVE_LINES);
    
    float connectDist = 70;
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
    
    int numVerticles = mesh.getNumVertices();
    
    for (int i=0; i<numVerticles; ++i) {
        ofVec3f verticle = mesh.getVertex(i);
        
        float time = ofGetElapsedTimef();
        float timeAmt = 10.0;
        ofVec3f timeOffsets = offset[i];
        
        
        verticle.x += (ofSignedNoise(time * timeAmt + timeOffsets.x)) * 20;
        verticle.y += (ofSignedNoise(time * timeAmt + timeOffsets.y)) * 10;
        verticle.z += (ofSignedNoise(time * timeAmt + timeOffsets.z)) * 10;
        mesh.setVertex(i, verticle);

        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushMatrix();
    
    ofRotate(ofGetFrameNum()* 1.0,1,1,0);
    mesh.draw();
    
    ofPopMatrix();
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
