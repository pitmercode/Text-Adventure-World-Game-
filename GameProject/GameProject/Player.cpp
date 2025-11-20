#include "Player.h"

void Player::setKeys(const char* keys)
{
	for (int i = 0; i < arrowKeysize; i++) {
		arrowKeys[i] = keys[i];
	}
}

void Player::move() {
	if (!enteredDoor)
	{
		setTextColor(color);
		Point org = player;
		player.erase();
		player.move(dir);
		if ((*screen).isWall(player))
		{
			player = org;
			dir = Direction::STAY;
		}
		if (screen->isDoor(player))
		{
			enteredDoor = true;
			return;
		}
		player.draw();
	}
}


const int Player::getDirection(char key)
{
	for (int i = 0; i < arrowKeysize; i++) {
		if (std::tolower(key) == std::tolower(arrowKeys[i])) {
			return i;
		}
	}
	return -1;
}
