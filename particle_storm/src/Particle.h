#pragma once

#include "ofMain.h"

class Particle
{
public:
	ofVec2f position;
	ofVec2f speed;
	float radius;	

	ofColor centerColor, innerColor, outerColor;

	void setup();
	virtual void move();
	void draw();
	void setColors(ofColor center, ofColor inner, ofColor outer);

	Particle();
};