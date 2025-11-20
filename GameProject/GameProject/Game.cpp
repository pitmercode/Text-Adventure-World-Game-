#include "Game.h"

void Game::init() {
	Point player1, player2;
	player1.init(27,12,'$');
	player2.init(53, 12, '&');

	p[0].setPoint(player1);
	p[1].setPoint(player2);

	p[0].setKeys("wdxas");
	p[1].setKeys("ilmjk");

	p[0].setColor(BLUE);
	p[1].setColor(GREEN);
}

void Game::run()
{
	hideCursor();
	char key = 0;
	int dir; 

	Screen s1;
	s1.initScreen("Room1.txt");

	p[0].setScreen(&s1);
	p[1].setScreen(&s1);
	s1.draw();

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

