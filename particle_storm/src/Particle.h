#pragma once

#include "ofMain.h"

#define MAX_LIFETIME 150;

class Particle
{
public:
	ofVec2f position;
	ofVec2f speed;
	float radius;	
	ofColor centerColor, innerColor, outerColor;
	long lifetime;

	virtual void move(); // virtual : hij kan overeden worden
	void draw();
	void setColors(ofColor center, ofColor inner, ofColor outer);
	bool isDead();

	Particle();
	Particle(float _originX, float _originY);
};