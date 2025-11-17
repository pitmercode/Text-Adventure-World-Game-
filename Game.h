#ifndef _GAME_H_
#define _GAME_H_

#include "Player.h"

class Game {
	enum { ESC = 27 };
	Player p[2];

public:
	void init();
	void run();
};

#endif
