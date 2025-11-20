#ifndef _POINT_H_
#define _POINT_H_

#include "io_utils.h"
#include "Direction.h"
#include "GameSizes.h"

class Point
{
    int x, y;
    char figure;

public:
    Point(const int _x = 0, const int _y = 0, const char _ch = '*') : x(_x), y(_y), figure(_ch) {}

    void init(int x1, int y1, char f = '*')
    {
        x = x1;
        y = y1;
        figure = f;
    }

    void move(Direction dir);

    void draw()
    {
        gotoxy(x, y);
        cout << figure << endl;
    }

    void erase()
    {
        gotoxy(x, y);
        cout << ' ';
    }

    int getX() const {
        return x;
    }
    int getY() const {
        return y;
    }
};

#endif
