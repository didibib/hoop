#include "ofApp.h"

void ofApp::setup() {
		emitters = ParticleEmitter::instance();
		emitters->setOrigin(ofGetWidth()/2, ofGetHeight()/2);
		emitters->setCurvingParticleRatio(0.8);
		ofColor center = ofColor(241, 89, 148); // kennelijk verandert deze regel ook de achtergrond, maar ik snap niet waarom.
		ofColor inner =  ofColor::white;
		ofColor outer = ofColor(221, 139, 154, 189);
		emitters->setColors(center, inner, outer);
}

void ofApp::update() {
	for (unsigned int i = 0; i < particles.size(); i++) {
		particles[i]->move();
	}

	if (ofGetFrameNum() % 5 == 0) {
		Particle* freshParticle = emitters->emit();
		particles.push_back(freshParticle);
	}
	
	reaper.cleanup(particles);

	ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}

void ofApp::draw() {
	ofBackground(0);
	for (int i = 0; i < particles.size(); i++) {
		particles[i]->draw();
	}
}