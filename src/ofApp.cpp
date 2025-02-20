#include "ofApp.h"
#include <algorithm>

class Node
{
public:
    int data;
    float x;
    float y;
    float size;
    float oscillation;
    Node* next;

    Node(int value) 
    {
        data = value;
        size = value;
        next = nullptr;
    }

};

class LinkedList
{
public:
    Node* head;

    LinkedList()
    {
        head = nullptr;
    }

    void insert(int value) 
    {
        Node* newNode = new Node(value);
        
        if (!head) 
        {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
};

LinkedList linkedList;
float amplitude = 10.0f;

    //--------------------------------------------------------------
    void ofApp::setup() 
    {
        ofSetFrameRate(60);
        ofSetBackgroundColor(30);
        linkedList.insert(ofRandom(10, 100));
    }

    //--------------------------------------------------------------
    void ofApp::update() {

    }

    //--------------------------------------------------------------
    void ofApp::draw()
    {
        ofPushMatrix();

        float dernierX = 50;
        
        Node* current = linkedList.head;
        
        while (current) 
        {
            current->x = dernierX;
            current->y = current->oscillation;

            if (current->next) 
            {
                ofDrawLine(current->x + current->size / 2, current->y, dernierX + current->size + 20, current->y);
            }


            ofSetColor(255, 100 + (current->data % 155), 150 + (current->data % 105));
            ofDrawRectangle(current->x - current->size / 2, current->y - current->size / 2, current->size, current->size);

            ofSetColor(255);
            ofDrawBitmapString(ofToString(current->data), current->x - 5, current->y + 5);

            dernierX = current->x + current->size + 20;
            current = current->next;
        }

        ofPopMatrix();

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
