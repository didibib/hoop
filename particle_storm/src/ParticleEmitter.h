#pragma once

#include "Particle.h"
#include "CurvingParticle.h"

class ParticleEmitter {

	public:
		void setCurvingParticleRatio(float _ratio);
		void setOrigin(float _originX, float _originY);
		void setColors(ofColor _center, ofColor _inner, ofColor _outer);

		Particle* emit();
		//static ParticleEmitter* instance();
		ParticleEmitter();
	private:
		float ratio;
		float originX, originY;
		ofColor center, inner, outer;	
		
		//static ParticleEmitter* neo;
};

