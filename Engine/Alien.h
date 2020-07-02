#pragma once
#include "Graphics.h"
#include "UFO.h"
#include <random>
class Alien
{
public:
	Alien(int start_x, int start_y);

	void Draw(Graphics& gfx);
	int count = 0;
	bool collected = false;
	int fadeout = 300;
	int fadein = 0;

	int x = 0;
	int y = 0;
	static constexpr int width = 18;
	static constexpr int height = 30;

	void DrawFade1(int x, int y, Graphics& gfx);
	void DrawFade2(int x, int y, Graphics& gfx);
	void DrawFade3(int x, int y, Graphics& gfx);
	void DrawFade4(int x, int y, Graphics& gfx);
	void DrawFade5(int x, int y, Graphics& gfx);

private:
	std::random_device rd;
	std::mt19937 rng;
	std::uniform_int_distribution<int> xDist;
	std::uniform_int_distribution<int> yDist;


};

