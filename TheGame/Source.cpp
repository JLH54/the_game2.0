#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include "MovingRectangle.h"
#include "Game.h"

int WINAPI WinMain(_In_ HINSTANCE, _In_opt_  HINSTANCE, _In_ LPSTR, _In_ int)
{
    srand((unsigned int)time(NULL));

	Game theGame;
	if (theGame.Init("Demo", 600, 800))
	{
		MovingRectangle rect1;
		rect1.SetPosition(250, 300);
		rect1.SetColor(191, 219, 9);
		rect1.SetSize(75, 75);
		rect1.SetVitesse(12);

		theGame.Add(&rect1);
		theGame.Start();
	}

    return 0;
}