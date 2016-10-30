#pragma once

#include "ofMain.h"

class Particle
{
public:
	ofVec2f position;
	ofVec2f speed;
	float radius;
	ofColor centerColor, innerColor, outerColor;

	virtual void move(); // virtueel: hij kan overeden worden
	void draw();
	void setColors(ofColor _center, ofColor _inner, ofColor _outer);
	
	Particle();
	Particle(float _originX, float _originY);
	~Particle();
};