// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h> 
#include <iostream>
#include <time.h>  
#include "Game.h"

using namespace std;

int l_iLives = 5;
bool l_bWin = false;

void Game::GameLoop()
{
	srand(time(NULL));
	while (l_iLives > 0 && !l_bWin)
	{
		int l_iGuess = -1;
		int l_iRandom = rand() % 100 + 1;
		cout << "Please enter a number between 1 and 100";
		cin >> l_iGuess;
		if (l_iGuess == l_iRandom)
			l_bWin = true;
		else 
		{
			if (l_iGuess > l_iRandom) 
			{
				cout << "You guessed higher than the number";
				l_iLives--;
			}
			else if (l_iGuess < l_iRandom)
			{
				cout << "You guessed lower than the number";
				l_iLives--;
			}
		}
	}
}
