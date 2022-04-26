#pragma once
#include "GameObject.h"
#include "IInput.h"

class Rectangle : public GameObject
{
protected:
	int m_Width = 10;
	int m_Height = 10;
	unsigned char m_Red = 0;
	unsigned char m_Green = 0;
	unsigned char m_Blue = 0;

public:
	//Rectangle(char* nom);
	void SetSize(int width, int height);
	void GetSize(int* width, int* height);
	
};

