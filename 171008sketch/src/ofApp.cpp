#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetWindowShape(1000, 800);
    ofSetFrameRate(60);
    ofBackground(0);
    
    ofSetLineWidth(0.1);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    this->cam.begin();
    
    float angle = 0;
    
    for (float radius = 10; radius < 300; radius += 15) {
        float tmp_x = 0;
        float tmp_y = 0;
        
//        ofRotateX(ofGetFrameNum() * 0.3);
        ofRotateY(ofGetFrameNum() * 0.1);
        ofRotateZ(ofGetFrameNum() * 0.5);
        angle += ofGetFrameNum() * 0.5;
        
        for (int deg = ofGetFrameNum(); deg < ofGetFrameNum() + 300; deg += 1) {
            float x = radius * cos(deg * DEG_TO_RAD);
            float y = radius * sin(deg * DEG_TO_RAD);
            
            if (tmp_x != 0 && tmp_y != 0) {
                ofDrawLine(x, y, tmp_x, tmp_y);
            }
            
            tmp_x = x;
            tmp_y = y;
        }
    }
    
    this->cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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