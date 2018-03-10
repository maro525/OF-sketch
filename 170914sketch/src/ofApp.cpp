#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(220);
    
    ofSetFrameRate(30);
    
    for (int i = 1; i <= line_num; ++i) {
    
        int center_point = i * ofGetWidth() / 12;
        line_center.push_back(center_point);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetLineWidth(20);
    ofSetColor(0);
    
    float diff_radian = ofDegToRad(ofGetFrameNum()) * speed;
    for (int i = 0; i < line_num; ++i) {
        
        float noise_radian = ofDegToRad(360 * i * noise_speed / line_num);
        float diff = sin(diff_radian + noise_radian) * ofGetWidth() / 18;
        float begin_x = line_center.at(i) + diff;
        float begin_y = ofGetHeight() / 7;
        float end_x = line_center.at(i) - diff;
        float end_y = ofGetHeight() - begin_y;
        
        ofDrawLine(begin_x, begin_y, end_x, end_y);
        ofDrawCircle(line_center.at(i), ofGetHeight()/2, 1);
    }
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