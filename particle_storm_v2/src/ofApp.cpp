#include "ofApp.h"

void ofApp::setup(){
	ofBackground(ofColor::black);

	emitter = new ParticleEmitter();
	emitter->setOrigin(ofGetWidth() / 2, ofGetHeight() / 2);
	emitter->setCurvingParticleRatio(0.8);
	emitter->setColors(ofColor::white, ofColor::turquoise, ofColor::pink);
	
}

void ofApp::update(){
	if (ofGetFrameNum() % 5 == 0) {
		Particle* freshParticle = emitter->emit();
		particles.push_back(freshParticle);
	}

	for (unsigned int i = 0; i < particles.size(); i++) {
		particles[i]->move();
	}
}

void ofApp::draw() {
	ofBackground(ofColor::black);
	for (int i = 0; i < particles.size(); i++) {
		particles[i]->draw();
	}
}