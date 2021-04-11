#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    rectColor = ofColor:: darkorange;
       drawColor = rectColor;
       
       circleColor = ofColor:: dodgerBlue;
       drawCircleColor = circleColor;
}

//--------------------------------------------------------------
void ofApp::update(){

    float animationTime = ofGetElapsedTimef();
            float firstChangeTime = 2;
            float secondChangeTime = 10;
            float thirdChangeTime = 14;
            float fourthChangeTime = 20;

        
        if (animationTime < firstChangeTime) {
                drawColor = rectColor;
            
        } else if (animationTime < secondChangeTime) {
              
              float timeSinceSecond = animationTime - firstChangeTime;
              
              float percentageToSecond = timeSinceSecond / (secondChangeTime - firstChangeTime);
              
              drawColor = rectColor.getLerped(ofColor::dodgerBlue, percentageToSecond);
            
        } else if (animationTime > thirdChangeTime){
            
            ofColor::darkBlue;
    }
        
        if (animationTime < firstChangeTime) {

                drawCircleColor = circleColor;
            
        } else if (animationTime < secondChangeTime) {
              
              float timeSinceSecond = animationTime - firstChangeTime;
              
              float percentageToSecond = timeSinceSecond / (secondChangeTime - firstChangeTime);
              
              drawCircleColor = circleColor.getLerped(ofColor::darkorange, percentageToSecond);
        } else if (animationTime > thirdChangeTime){
            
            ofColor::darkorange;
        }
        
        
    }

//--------------------------------------------------------------
void ofApp::draw(){
    
        //draws background colour
        ofBackground(0,0,0);
        
        
        //draws loop -- ic: lewis lepton
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofNoFill();
        ofSetCircleResolution(100);
        ofSetRectMode(OF_RECTMODE_CENTER);
        for (int i = 0; i < 60; i++){
            ofRotateDeg(ofGetElapsedTimef());
            ofScale(0.92);
        
        //draws circle fades blue-orange
        ofSetLineWidth(3);
        ofSetColor(drawCircleColor);
        ofDrawCircle(0, 0, 500);
        
        //draws rectangles fades orange - blue
        ofSetLineWidth(3);
        ofSetColor(drawColor);
        ofDrawRectangle(0, 0, 750, 750);
        
        //draws white circles
        ofSetLineWidth(2);
        ofSetColor(255,255,255);
        ofDrawCircle(0, 0, 480);
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
