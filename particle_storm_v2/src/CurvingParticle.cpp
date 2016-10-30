#include "CurvingParticle.h"

CurvingParticle::CurvingParticle() {}
CurvingParticle::~CurvingParticle() {}

CurvingParticle::CurvingParticle(float _originX, float _originY){
	position = ofVec2f(_originX, _originY);
	curve = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
}

void CurvingParticle::move() {
	position += speed;
	curve.rotate(2);
	position += curve;
}