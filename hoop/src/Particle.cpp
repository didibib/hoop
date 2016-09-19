#include "Particle.h"

Particle::Particle() {

}

Particle::Particle(float _xCos, float _ySin) {
	radius = ofRandom(1, 20);
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);
	speed = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));

	innerColor = ofColor(102, 0, 102, 127);
	outerColor = ofColor(128, 255, 255, 15);

	xCos = ofRandom(0.01, 100);
	ySin = ofRandom(0.01, 100);
}

void Particle::setup() {
	
}


void Particle::move() {
	position.x = ofMap(cos(xCos), -1, 1, 0, ofGetWidth());
	position.y = ofMap(sin(ySin), -1, 1, 0, ofGetHeight());
	xCos += 0.01;
	ySin += 0.01;
}

void Particle::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}