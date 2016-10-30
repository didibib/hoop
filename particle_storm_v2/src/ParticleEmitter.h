#pragma once

#include "Particle.h"
#include "CurvingParticle.h"

class ParticleEmitter
{
public:
	float ratio;
	float originX, originY;
	ofColor center, inner, outer;

	Particle* emit();
	void setCurvingParticleRatio(float _ratio);
	void setOrigin(float _originX, float _originY);
	void setColors(ofColor _center, ofColor _inner, ofColor _outer);
	
	ParticleEmitter();
	~ParticleEmitter();
};

