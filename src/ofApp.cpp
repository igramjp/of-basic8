#include "ofApp.h"

static const int NUM = 1000;

/*
float loc_x1;
float loc_y1;
float speed_x1;
float speed_y1;

float loc_x2;
float loc_y2;
float speed_x2;
float speed_y2;

float loc_x3;
float loc_y3;
float speed_x3;
float speed_y3;
*/

float loc_x[NUM];
float loc_y[NUM];
float speed_x[NUM];
float speed_y[NUM];
float radius[NUM];
float red[NUM];
float green[NUM];
float blue[NUM];

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    ofSetCircleResolution(64);
    ofEnableAlphaBlending();
    
    /*
    loc_x1 = ofRandom(0, ofGetWidth());
    loc_y1 = ofRandom(0, ofGetHeight());
    speed_x1 = ofRandom(-10, 10);
    speed_y1 = ofRandom(-10, 10);
    
    loc_x2 = ofRandom(0, ofGetWidth());
    loc_y2 = ofRandom(0, ofGetHeight());
    speed_x2 = ofRandom(-10, 10);
    speed_y2 = ofRandom(-10, 10);
    
    loc_x3 = ofRandom(0, ofGetWidth());
    loc_y3 = ofRandom(0, ofGetHeight());
    speed_x3 = ofRandom(-10, 10);
    speed_y3 = ofRandom(-10, 10);
    */
    
    for (int i=0; i<NUM; i++) {
        loc_x[i] = ofRandom(0, ofGetWidth());
        loc_y[i] = ofRandom(0, ofGetHeight());
        speed_x[i] = ofRandom(-10, 10);
        speed_y[i] = ofRandom(-10, 10);
        radius[i] = ofRandom(4, 40);
        red[i] = ofRandom(0, 255);
        green[i] = ofRandom(0, 255);
        blue[i] = ofRandom(0, 255);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    /*
    loc_x1 = loc_x1 + speed_x1;
    loc_y1 = loc_y1 + speed_y1;
    if (loc_x1 < 0) {
        speed_x1 = speed_x1 * -1;
    }
    if (loc_x1 > ofGetWidth()) {
        speed_x1 = speed_x1 * -1;
    }
    if (loc_y1 < 0) {
        speed_y1 = speed_y1 * -1;
    }
    if (loc_y1 > ofGetHeight()) {
        speed_y1 = speed_y1 * -1;
    }
    
    loc_x2 = loc_x2 + speed_x2;
    loc_y2 = loc_y2 + speed_y2;
    if (loc_x2 < 0) {
        speed_x2 = speed_x2 * -1;
    }
    if (loc_x2 > ofGetWidth()) {
        speed_x2 = speed_x2 * -1;
    }
    if (loc_y2 < 0) {
        speed_y2 = speed_y2 * -1;
    }
    if (loc_y2 > ofGetHeight()) {
        speed_y2 = speed_y2 * -1;
    }
    
    loc_x3 = loc_x3 + speed_x3;
    loc_y3 = loc_y3 + speed_y3;
    if (loc_x3 < 0) {
        speed_x3 = speed_x3 * -1;
    }
    if (loc_x3 > ofGetWidth()) {
        speed_x3 = speed_x3 * -1;
    }
    if (loc_y3 < 0) {
        speed_y3 = speed_y3 * -1;
    }
    if (loc_y3 > ofGetHeight()) {
        speed_y3 = speed_y3 * -1;
    }
    */
    
    for (int i=0; i<NUM; i++) {
        loc_x[i] = loc_x[i] + speed_x[i];
        loc_y[i] = loc_y[i] + speed_y[i];
        if (loc_x[i] < 0) {
            speed_x[i] = speed_x[i] * -1;
        }
        if (loc_x[i] > ofGetWidth()) {
            speed_x[i] = speed_x[i] * -1;
        }
        if (loc_y[i] < 0) {
            speed_y[i] = speed_y[i] * -1;
        }
        if (loc_y[i] > ofGetHeight()) {
            speed_y[i] = speed_y[i] * -1;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    /*
    ofSetColor(31, 63, 255, 127);
    ofDrawCircle(loc_x1, loc_y1, 40);
    ofDrawCircle(loc_x2, loc_y2, 40);
    ofDrawCircle(loc_x3, loc_y3, 40);
    */

    for (int i=0; i<NUM; i++) {
        ofSetColor(red[i], green[i], blue[i], 127);
        ofDrawCircle(loc_x[i], loc_y[i], radius[i]);
    }
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
