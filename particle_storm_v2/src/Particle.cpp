#include "Particle.h"

Particle::Particle(){}
Particle::~Particle() {}

Particle::Particle(float _originX, float _originY) {
	position = ofVec2f(_originX, _originY);
	speed = ofVec2f(ofRandom(-2, 2), ofRandom(-2, 2));
	radius = ofRandom(0, 20);
}

void Particle::move() {
	position += speed;
}

void Particle::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}

void Particle::setColors(ofColor _center, ofColor _inner, ofColor _outer) {
	centerColor = _center;
	innerColor = _inner;
	outerColor = _outer;
}