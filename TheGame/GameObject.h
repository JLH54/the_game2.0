#pragma once
#include <vector>
#include <math.h>
#include <time.h>
#include "SDL_image.h"
#include "Game.h"

struct SDL_Renderer;
class Game;

class GameObject
{
protected:
	int m_X = 0;
	int m_Y = 0;
	char* m_nom;
	float tElapsed = 0.0f;
	float tDelai = 1.0f;
	SDL_Renderer* graphics;
public:
	//GameObject(char* nom);
	void SetPosition(int x, int y);
	void GetPosition(int* x, int* y);
	void Translate(int dx, int dy);

	virtual void Draw(SDL_Renderer* graphics);
	virtual void Update(input* input);
};
