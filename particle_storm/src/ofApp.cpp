#include "ofApp.h"

void ofApp::setup(){

	for (int i = 0; i < MAX_PARTICLES; i += 2) {
			particles.push_back(Particle());
			particles.push_back(CurvingParticle());
	}
}

void ofApp::update(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i].move();
	}
}

void ofApp::draw(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i].draw();
	}
}

void ofApp::keyPressed(int key) {
	float r = ofRandom(1);
	if (r > 0.8) {
		particles.push_back(Particle());
	}
	else {
		particles.push_back(CurvingParticle());
	}
}

