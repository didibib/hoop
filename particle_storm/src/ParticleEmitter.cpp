#include "ParticleEmitter.h"

ParticleEmitter::ParticleEmitter() {}

Particle* ParticleEmitter::emit() {
	Particle* newParticle;
	if (ofRandom(1) < ratio) {
		newParticle = new CurvingParticle(originX, originX);		
	}
	else {
		newParticle = new Particle(originX, originX);
	}

	newParticle->setColors(center, inner, outer);

	return newParticle;
}

void ParticleEmitter::setOrigin(float _originX, float _originY) {
	originX = _originX;
	originY = _originX;
}

void ParticleEmitter::setCurvingParticleRatio(float _ratio) {
	ratio = _ratio;
}

void ParticleEmitter::setColors(ofColor _center, ofColor _inner, ofColor _outer) {
	center = _center;
	inner = _inner;
	outer = _outer;
}

ParticleEmitter* ParticleEmitter::instance() {
	if (!neo) {
		neo = new ParticleEmitter();
	}

	return neo;
}

ParticleEmitter* ParticleEmitter::neo = 0;