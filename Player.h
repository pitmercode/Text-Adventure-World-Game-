#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "Point.h"

class Player {
	Point player;
	int static constexpr arrowKeysize = 5;
	char arrowKeys[arrowKeysize];
	Direction dir = Direction::STAY;
public:
	void setPoint(Point p) { player = p; }
	void setKeys(const char* keys);
	void setDir(Direction newDir) { dir = newDir; }
	void move();
	const int getDirection(char key);

};

#endif // _PLAYER_H_

