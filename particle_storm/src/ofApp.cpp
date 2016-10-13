#include "ofApp.h"

void ofApp::setup() {
	for (int i = 0; i < MAX_EMITTERS; i++) {
		emitters[i] = ParticleEmitter();
		emitters[i].setOrigin((i + 1) * 200, (i + 1) * 200);
		emitters[i].setCurvingParticleRatio(ofRandom(0.1, 0.9));
		ofColor center = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
		ofColor inner = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
		ofColor outer = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
		emitters[i].setColors(center, inner, outer);
	}
}

void ofApp::update() {
	for (int i = 0; i < particles.size(); i++) {
		particles[i]->move();
	}

	Particle* freshParticle1 = emitters[1].emit();
	particles.push_back(freshParticle1);

	Particle* freshParticle2 = emitters[2].emit();	
	particles.push_back(freshParticle2);
}

void ofApp::draw() {
	for (int i = 0; i < particles.size(); i++) {
		particles[i]->draw();
	}
}