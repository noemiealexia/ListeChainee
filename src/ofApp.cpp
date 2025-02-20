#include "ofApp.h"

struct Node
{
    int value;
    float x;
    float y;
    float size;
    float oscillation;
};

std::list<Node> linkedList;

    //--------------------------------------------------------------
    void ofApp::setup() 
    {
        ofSetFrameRate(60);
        ofSetBackgroundColor(30);
    }

    //--------------------------------------------------------------
    void ofApp::update() {

    }

    //--------------------------------------------------------------
    void ofApp::draw()
    {
        ofPushMatrix();

        float dernierX = 50;
        for (auto& node : linkedList)
        {
            node.x = dernierX;
            node.y = node.oscillation;
            node.size = node.value;

            if (&node != &linkedList.front())
            {
                ofDrawLine(dernierX - node.size / 2, node.y, node.x + node.size / 2, node.y);
            }

            ofSetColor(255, 100 + (node.value % 155), 150 + (node.value % 105));
            ofDrawRectangle(node.x - node.size / 2, node.y - node.size / 2, node.size, node.size);

            ofSetColor(255);
            ofDrawBitmapString(ofToString(node.value), node.x - 5, node.y + 5);

            dernierX = node.x + node.size + 20;
        }

    }

    //--------------------------------------------------------------
    void ofApp::keyPressed(int key) {

    }

    //--------------------------------------------------------------
    void ofApp::keyReleased(int key) {

    }

    //--------------------------------------------------------------
    void ofApp::mouseMoved(int x, int y) {

    }

    //--------------------------------------------------------------
    void ofApp::mouseDragged(int x, int y, int button) {

    }

    //--------------------------------------------------------------
    void ofApp::mousePressed(int x, int y, int button) {

    }

    //--------------------------------------------------------------
    void ofApp::mouseReleased(int x, int y, int button) {

    }

    //--------------------------------------------------------------
    void ofApp::mouseEntered(int x, int y) {

    }

    //--------------------------------------------------------------
    void ofApp::mouseExited(int x, int y) {

    }

    //--------------------------------------------------------------
    void ofApp::windowResized(int w, int h) {

    }

    //--------------------------------------------------------------
    void ofApp::gotMessage(ofMessage msg) {

    }

    //--------------------------------------------------------------
    void ofApp::dragEvent(ofDragInfo dragInfo) {

    }
