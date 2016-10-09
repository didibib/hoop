#include "Particle.h"

Particle::Particle() {

}

Particle::Particle(ofVec3f _position, float _xCos, float _ySin) {
	radius = ofRandom(1, 20);
	position = _position;

	centerColor = ofColor::white;
	innerColor = ofColor(102, 0, 102, 127);
	outerColor = ofColor(128, 255, 255, 15);
	
	p_xCos = _xCos * ofRandom(1, 5);
	p_ySin = _ySin * ofRandom(1, 5);

	p_ampX = 0.01;
	p_ampY = 0.01;
}

void Particle::setup() {

}

void Particle::move() {
	float map_xCos = ofMap(cosf(p_xCos), -1, 1, 0, ofGetWidth());
	float map_ySin = ofMap(sin(p_ySin), -1, 1, 0, ofGetHeight());
	map_xCos += p_ampX;
	map_ySin += p_ampY;
	position.x = map_xCos;
	position.y = map_ySin;	
}

void Particle::setColors(ofColor center, ofColor inner, ofColor outer) {
	centerColor = center;
	innerColor = inner;
	outerColor = outer;
}

void Particle::setAmp(float _ampX, float _ampY) {
	p_ampX = _ampX;
	p_ampY = _ampY;
}

void Particle::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}