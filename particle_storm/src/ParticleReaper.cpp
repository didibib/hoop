#include "ParticleReaper.h"

ParticleReaper::ParticleReaper(){}

void ParticleReaper::cleanup(vector<Particle*>& particles) {
	for (vector<Particle*>::iterator it = particles.begin(); it != particles.end();) {
		if ((*it)->isDead()) { //VRAAG : Waarom *it en niet it* en waarom moet het tussen haakjes
			delete *it;
			it = particles.erase(it);
		}
		else {
			++it;
		}
	}
}
