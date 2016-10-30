#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleEmitter.h"
#include "ParticleReaper.h"

#define MAX_PARTICLES 500
#define MAX_EMITTERS 1

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();	

	private:
		vector<Particle*> particles;
		ParticleEmitter* emitters;
		ParticleReaper reaper;
};