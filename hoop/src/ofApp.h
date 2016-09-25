#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "Particle.h"

class ofApp : public ofBaseApp{

	public:
		ofxPanel gui;
		ofParameter<float> ampX;
		ofParameter<float> ampY;

		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		static const int nParticles = 100;
		Particle particles[nParticles];		
};
