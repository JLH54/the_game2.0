#include "Rectangle.h"
#include <SDL.h>

//Rectangle::Rectangle(char* nom)
//{
//    this->nom = nom;
//}

void Rectangle::SetSize(int width, int height)
{
    m_Width = width;
    m_Height = height;
}

void Rectangle::GetSize(int* width, int* height)
{
    *width = m_Width;
    *height = m_Height;
}