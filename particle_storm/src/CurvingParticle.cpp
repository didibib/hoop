#include "CurvingParticle.h"

CurvingParticle::CurvingParticle() {
	curve = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
}

void CurvingParticle::move() {
	curve.rotate(5);
	position += curve;
	cout << "\n" << curve;
}
