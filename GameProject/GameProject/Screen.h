#ifndef _SCREEN_H_
#define _SCREEN_H_

#include <iostream>
#include <fstream>
#include <cctype>
#include "Point.h"


class Screen
{
	char screen[MAX_Y][MAX_X+1];
	char wallChar = 'W';

public:
	void initScreen(const char* file);
	void draw();
	char getCharAt(const Point& p) const
	{
		return screen[p.getY()][p.getX()];
	}
	bool isWall(const Point& p) const
	{
		return getCharAt(p) == wallChar;
	}
	bool isDoor(const Point& p) const
	{
		return isdigit(getCharAt(p));
	}

};
#endif // !