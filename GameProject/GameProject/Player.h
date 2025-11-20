#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "Point.h"
#include "Screen.h"


class Player {
	Point player;
	int static constexpr arrowKeysize = 5;
	char arrowKeys[arrowKeysize];
	Direction dir = Direction::STAY;
	Screen* screen;
	Color color;
	bool enteredDoor = false;

public:
	Player() {};
	Player(const Point& _player, const char* keys, Screen* _screen, const Direction& _dir);
	void setPoint(Point p) { player = p; }
	void setKeys(const char* keys);
	void setDir(Direction newDir) { dir = newDir; }
	void move();
	const int getDirection(char key);
	void setScreen(Screen* _screen) { screen = _screen; };
	void drawPlayer() { player.draw(); }
	void setColor(Color col) { color = col; }
	bool insideDoor() { return enteredDoor; }
};

#endif // _PLAYER_H_


