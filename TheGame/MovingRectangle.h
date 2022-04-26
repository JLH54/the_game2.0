#pragma once
#include "Rectangle.h"
class MovingRectangle : public Rectangle 
{
private:
	int m_dirX;
	int m_dirY;
	int m_vitesse;

	void Move(input* input);
	
public:
	//MovingRectangle(char* nom);
	void SetVitesse(int vitesse);
	virtual void Draw(SDL_Renderer* graphics) override;
	virtual void Update(input* input);
	void SetColor(unsigned char r, unsigned char g, unsigned char b);
};

