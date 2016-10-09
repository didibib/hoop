#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "CurvingParticle.h"

#define MAX_PARTICLES 100

class ofApp : public ofBaseApp{

	public:
		vector<Particle> particles;

		void setup();
		void update();
		void draw();	

		void keyPressed(int key);
};