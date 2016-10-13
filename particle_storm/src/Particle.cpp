#include "Particle.h"

Particle::Particle(){}

Particle::Particle(float _originX, float _originY) {
	position = ofVec2f(_originX, _originY);
	speed = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
	radius = ofRandom(0, 20);

	outerColor = ofColor(105, 127, 110, 54);
	innerColor = ofColor(221, 139, 154, 189);
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

void Particle::setColors(ofColor center, ofColor inner, ofColor outer) {
	centerColor = center;
	innerColor = inner;
	outerColor = outer;
}
