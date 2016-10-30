#pragma once


#include "Particle.h"

class ParticleEmitter {
    public:
        void setOrigin(const int x, const int y);

        void setCurvingParticleRatio(float ratio);

        void setColours(ofColor innerColour, ofColor outerColor);

        Particle* emit() const;

    private:
        int originX;
        int originY;
        float curvingParticleRatio;
        ofColor inner;
        ofColor outer;
};

