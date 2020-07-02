#pragma once
#include "Graphics.h"
#include "UFO.h"
#include <random>

class Obstacle
{
public:
	Obstacle(int start_x, int start_y, int start_vx, int start_vy);

	void Draw(Graphics& gfx);
	void movement();
	void colliding(UFO& ufo);
	int turnspeed = 300;
	void reset_pos_vx();
	void reset_pos_vy();

private:
	std::random_device rd;
	std::mt19937 rng;
	std::uniform_int_distribution<int> turnspeedDist;
	std::uniform_int_distribution<int> xDist;
	std::uniform_int_distribution<int> yDist;
	std::uniform_int_distribution<int> vxDist;
	std::uniform_int_distribution<int> vyDist;

	int x;
	int y;
	int vx;
	int vy;
	static constexpr int width = 40;
	static constexpr int height = 40;
	void draw0(int x, int y, Graphics& gfx);
	void draw1(int x, int y, Graphics& gfx);
	void draw2(int x, int y, Graphics& gfx);
	void draw3(int x, int y, Graphics& gfx);

};

