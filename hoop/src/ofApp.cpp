#include "ofApp.h"

void ofApp::setup(){
	gui.setup("Instelling", "settings.xml");
	gui.add(xCos.set("xCos", 10, 0.01, 100));
	gui.add(yCos.set("ySin", 10, 0.01, 100));

	for (int i = 0; i < nParticles; i++) {
		particles[i] = Particle(xCos, yCos);
	}
}

void ofApp::update(){
	for (int i = 0; i < nParticles; i++) {
		particles[i].move();
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




