#include "Game.h"

void Game::init() {
	Point player1, player2;
	player1.init(30,12,'$');
	player2.init(60, 12, '&');

	p[0].setPoint(player1);
	p[1].setPoint(player2);

	p[0].setKeys("wdxas");
	p[1].setKeys("ilmjk");
}

void Game::run()
{
	hideCursor();
	char key = 0;
	int dir; 
	do {
		if (_kbhit()) {
			key = _getch();
			if ((dir = p[0].getDirection(key)) != -1) {
				p[0].setDir((Direction)dir);

			}
			if ((dir = p[1].getDirection(key)) != -1) {
				p[1].setDir((Direction)dir);
			}
		}
		p[0].move();
		p[1].move();
		Sleep(100);
			
	} while (key != ESC);
	clear_screen();
}

