/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "UFO.h"
#include "Alien.h"
#include "Obstacle.h"
#include <random>

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
    void DrawLifeGrey(int x, int y);
    void DrawLifeRed(int x, int y);
    void DrawAlienGrey(int x, int y);
    void DrawAlienGreen(int x, int y);
    void DrawObstacle(int x, int y);
    void DrawRestart(int x, int y, int r, int g, int b);
    void collect(UFO& ufo, Alien& alien, Graphics& gfx);
    void base_control(UFO& ufo, const Alien& alien);
    bool game_won = false;
    bool game_lost = false;
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	/********************************/
    std::random_device rd;
    std::mt19937 rng;
    std::uniform_int_distribution<int> xDist;
    std::uniform_int_distribution<int> yDist;
    std::uniform_int_distribution<int> vxDist;
    std::uniform_int_distribution<int> vyDist;

    UFO ufo;
    Alien alien;
    Obstacle obstacle0;
    Obstacle obstacle1;
    Obstacle obstacle2;
    Obstacle obstacle3;
    Obstacle obstacle4;
    Obstacle obstacle5;
    Obstacle obstacle6;
    Obstacle obstacle7;
    Obstacle obstacle8;
    Obstacle obstacle9;

    int rgb = 255;
    int rgb_switch = 0;
};