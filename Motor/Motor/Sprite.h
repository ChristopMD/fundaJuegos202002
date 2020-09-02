#pragma once
#include <GLEW/glew.h>

class Sprite
{
private:
	float x;
	float y;
	int witdh;
	int height;
public:
	Sprite();
	~Sprite();
	void init(float _x, float _y, int _witdh, int _height);
	void draw();
};