#include "Screen.h"


void Screen::initScreen(const char* file) // written by AI
{
    std::ifstream in(file);
    if (!in) {
        std::cerr << "Error opening file\n";
        return;
    }

    char buffer[256];  // temporary line buffer

    for (int row = 0; row < MAX_Y; row++)
    {
        if (in.getline(buffer, sizeof(buffer)))
        {
            // Copy characters manually
            int col = 0;
            while (buffer[col] != '\0' && col < MAX_X) {
                screen[row][col] = buffer[col];
                col++;
            }

            // Null terminate
            screen[row][col] = '\0';
        }
        else
        {
            // No more lines — make empty line
            screen[row][0] = '\0';
        }
    }
}

void Screen::draw()
{
    for (int i = 0;i < 25;i++)
    {
        std::cout << screen[i] << std::endl;
    }
}


	