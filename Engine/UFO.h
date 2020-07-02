#pragma once
#include "Graphics.h"
#include "Keyboard.h"
#include "Alien.h"
class UFO
{
public:
	UFO(int start_x, int start_y, int start_speed);
	void DrawUFO(Graphics& gfx);
	void movement(const Keyboard& kbd);
	int lightswitch = 300;
	bool base_open = true;
	int life_count = 3;
	int onfire = 0;
	void DrawFire(Graphics& gfx);
	int getX() const;
	int getY() const;
	int getSpeed() const;
	int getWidth() const;
	int getHeight() const;
	void pos_reset();
	void full_reset();
	void stop();

private:
	int x = 0;
	int y = 0;
	int speed = 0;
	static constexpr int width = 30;
	static constexpr int height = 23;
	void DrawUFO_0(int x, int y, Graphics& gfx);
	void DrawUFO_1(int x, int y, Graphics& gfx);
	void DrawUFO_2(int x, int y, Graphics& gfx);
	void DrawUFO_3(int x, int y, Graphics& gfx);
	void DrawUFO_4(int x, int y, Graphics& gfx);
	void DrawFire_0(int x, int y, Graphics& gfx);
	void DrawFire_1(int x, int y, Graphics& gfx);
};

