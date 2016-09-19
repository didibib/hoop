#pragma once

#include "ofMain.h"

using namespace std;

class Particle {

public:
	ofVec3f position;
	float radius;
	ofVec2f speed;
	long lifetime; //long is een grote int
	float xCos, ySin;	

	ofColor centerColor = ofColor::white;
	ofColor innerColor;
	ofColor outerColor;

	Particle();
	Particle(float _xCos, float _ySin);

	void setup();
	void move();
	void draw();

};

