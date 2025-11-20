#ifndef _IO_UTILS_H_
#define _IO_UTILS_H_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "Color.h"
using namespace std;

void gotoxy(int x, int y);
void setTextColor(Color colorToSet);
void hideCursor();
void clear_screen();

#endif