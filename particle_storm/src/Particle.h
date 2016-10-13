#pragma once

#include "ofMain.h"

class Particle
{
public:
	ofVec2f position;
	ofVec2f speed;
	float radius;	
	ofColor centerColor, innerColor, outerColor;

	virtual void move(); // virtual : hij kan overeden worden
	void draw();
	void setColors(ofColor center, ofColor inner, ofColor outer);

	Particle();
	Particle(float _originX, float _originY);
};