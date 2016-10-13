#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "CurvingParticle.h"
#include "ParticleEmitter.h"

#define MAX_PARTICLES 500
#define MAX_EMITTERS 2

class ofApp : public ofBaseApp{

	public:
		vector<Particle*> particles;
		ParticleEmitter emitters[MAX_EMITTERS];

		void setup();
		void update();
		void draw();	
};