#pragma once

/*ifndef GAME_H
#define GAME_H
*/

/*
*	class that acts as the game engine.
*	wrapper 
*/

class Game
{
private:

public:
	//constructors and destructors
	Game();
	virtual ~Game();

	void update();
	void render();
};

