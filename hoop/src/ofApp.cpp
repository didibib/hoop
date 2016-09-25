#include "ofApp.h"

void ofApp::setup(){
	ofBackground(0);
	gui.setup("Instelling", "settings.xml");
	gui.add(ampX.set("ampX", 1, 0.001, 1));
	gui.add(ampY.set("ampY", 1, 0.001, 1));

	ofVec3f rPos = ofVec3f(ofGetWidth()/2, ofGetHeight()/2);
	for (int i = 0; i < nParticles; i++) {		
		particles[i] = Particle(rPos, i, i);
	}
}

void ofApp::update(){
	for (int i = 0; i < nParticles; i++) {
		particles[i].move();
	}
	for (int i = 0; i < nParticles; i++) {
		if (particles[i].p_ampX != ampX || particles[i].p_ampY != ampY) {
			particles[i].setAmp(ampX, ampY);
		}
	}

}

void ofApp::draw(){
	gui.draw();

	for (int i = 0; i < nParticles; i++) {
		particles[i].draw();
	}
}

void ofApp::keyPressed(int key){

}




