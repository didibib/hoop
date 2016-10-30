#include "Particle.h"

Particle::Particle(){}

Particle::Particle(float _originX, float _originY) {
	position = ofVec2f(_originX, _originY);
	speed = ofVec2f(ofRandom(-2, 2), ofRandom(-2, 2));
	radius = ofRandom(0, 20);
	lifetime = 0;
}

void Particle::move() {
	position += speed;
	lifetime++;
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

bool Particle::isDead() {
	return lifetime > MAX_LIFETIME;
}