#include "ofApp.h"

void ofApp::setup() 
{
	face = make_unique<Face>();
}
void ofApp::keyPressed(int key) 
{
	if (key == 'r')
		face->randomize();
	if (key == 'd')
		face->dump();
}
void ofApp::update() {}
void ofApp::draw() {}
void ofApp::keyReleased(int key) {}
void ofApp::mouseMoved(int x, int y) {}
void ofApp::mouseDragged(int x, int y, int button) {}
void ofApp::mousePressed(int x, int y, int button) {}
void ofApp::mouseReleased(int x, int y, int button) {}
void ofApp::mouseEntered(int x, int y) {}
void ofApp::mouseExited(int x, int y) {}
void ofApp::windowResized(int w, int h) {}
void ofApp::gotMessage(ofMessage msg) {}
void ofApp::dragEvent(ofDragInfo dragInfo) {}