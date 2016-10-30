#pragma once

#include "Particle.h"

class CurvingParticle : public Particle{
public:
	ofVec2f curve;
	void move();

	CurvingParticle(float _originX, float _originY);
	CurvingParticle();	
	~CurvingParticle();
};

