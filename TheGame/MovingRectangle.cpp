#include "MovingRectangle.h"

void MovingRectangle::Move(input* input)
{
    if (input->IsKeyDown(4) && m_X > 0)
    {
        m_dirX = -1;
    }
    if (input->IsKeyDown(7) && m_X < 600 - m_Width)
    {
        m_dirX = 1;
    }
    if (input->IsKeyDown(26) && m_Y > 0)
    {
        m_dirY = -1;
    }
    if (input->IsKeyDown(22) && m_Y < 800 - m_Height)
    {
        m_dirY = 1;
    }
    m_X += m_dirX * m_vitesse;
    m_Y += m_dirY * m_vitesse;
    m_dirX = 0;
    m_dirY = 0;
}

void MovingRectangle::SetVitesse(int vitesse)
{
    this->m_vitesse = vitesse;
}

//MovingRectangle::MovingRectangle(char* nom)
//{
//    m_nom = nom;
//    m_dirX = 0;
//    m_dirY = 0;
//}

void MovingRectangle::Draw(SDL_Renderer* graphics)
{
    SDL_Rect rect = { m_X, m_Y, m_Width, m_Height };
    SDL_SetRenderDrawColor(graphics, m_Red, m_Green, m_Blue, 255);
    SDL_RenderFillRect(graphics, &rect);
    //SDL_RenderDrawRect(graphics, &rect);
}

void MovingRectangle::Update(input* input)
{
    /*int x, y;
    input->MousePosition(&x, &y);
    SetPosition(x, y);*/
    Move(input);
}

void MovingRectangle::SetColor(unsigned char r, unsigned char g, unsigned char b)
{
    m_Red = r;
    m_Green = g;
    m_Blue = b;
}
