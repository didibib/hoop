#pragma once

#include "ofMain.h"

using namespace std;

class Particle {

public:
	ofVec3f position;
	float radius;
	ofVec2f speed;
	long lifetime; //long is een grote int

	ofColor centerColor;
	ofColor innerColor;
	ofColor outerColor;

	float p_xCos, p_ySin;
	float p_ampX, p_ampY;

	Particle();
	Particle(ofVec3f _position, float _xCos, float _ySin);

	void setup();
	void move();
	void draw();
	void setColors(ofColor center, ofColor inner, ofColor outer);
	void setAmp(float _ampX, float _ampY);
};

