#include "../Header Files/game.h"
#include <windows.h>
#include <conio.h>
#include <iostream>

using namespace std;
bool Game::run(void)
{
    char key = ' ';
    startTime = timeGetTime();
    frameCount = 0;
    while(key != 'q')
    {
        while(!getInput(&key))
        {
            timerUpdate();
        }
        cout << "Here's what you pressed: " << key << endl;
    }
    cout <<  frameCount << endl;
    cout << "End of the game" << endl;
    return true;
}

bool Game::getInput(char *c){
    if(kbhit()){
        *c = getch();
        return true;
    }
    return false;
}

void Game::timerUpdate(void){
    frameCount++;
}