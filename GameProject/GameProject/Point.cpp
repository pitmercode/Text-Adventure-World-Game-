#include "Point.h"

void Point::move(Direction dir)
{
    switch (dir) {
    case(Direction::UP):
        if (y > 0)
            y -= 1;
        break;
    case(Direction::LEFT):
        if (x > 0)
            x -= 1;
        break;
    case(Direction::RIGHT):
        if (x < MAX_X-1)
            x += 1;
        break;
    case(Direction::DOWN):
        if (y < MAX_Y-1)
            y += 1;
        break;
    default:
        break;

    }

}