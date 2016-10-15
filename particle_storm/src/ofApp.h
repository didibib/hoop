#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleEmitter.h"
#include "ParticleReaper.h"

#define MAX_PARTICLES 500
#define MAX_EMITTERS 2

class ofApp : public ofBaseApp{

	public:
		vector<Particle*> particles;
		ParticleEmitter emitters[MAX_EMITTERS];
		ParticleReaper reaper;

		void setup();
		void update();
		void draw();	
};