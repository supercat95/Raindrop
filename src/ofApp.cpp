#include "ofApp.h"
#include "WaterDrop.hpp"

vector <WaterDrop*> droplets;
float xPos, yPos, size;

int frequency;
//string welcome = Welcome to the rain simulator. How heavy do you want the rain to be?;
//string option 1 = Type '1' for light
//string option 2 = Type '2' for medium
//string option 3 = Type '3' for heavy

ofApp:: ~ofApp() {}

//--------------------------------------------------------------
void ofApp::setup()
{
    ofBackground(167, 196, 235);
    
    cout << "Welcome to the rain simulator. How heavy do you want the rain to be?" << endl
    << "Type '1' for light" << endl
    << "Type '2' for medium" << endl
    << "Type '3' for heavy" << endl;
    cin >> frequency;
    
    for (int i = 0; i < frequency * 50; i++)
    {
        WaterDrop* droplet = new WaterDrop(ofRandom(ofGetWidth()), ofRandom(10));
        droplets.push_back(droplet);
    }
}

//--------------------------------------------------------------
void ofApp::update()
{
    for (int i = 0; i < droplets.size(); i++)
    {
        droplets[i]->gravity();
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    for (int i = 0; i < droplets.size(); i++)
    {
        droplets[i]->display();
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
void ofApp::mousePressed(int x, int y, int button)
{

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
