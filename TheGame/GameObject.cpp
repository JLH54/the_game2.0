#include "GameObject.h"

//GameObject::GameObject(char* nom)
//{
//    this->nom = nom;
//}

void GameObject::SetPosition(int x, int y)
{
    m_X = x;
    m_Y = y;
}

void GameObject::GetPosition(int* x, int* y)
{
    *x = m_X;
    *y = m_Y;
}

void GameObject::Translate(int dx, int dy)
{
    m_X += dx;
    m_Y += dy;
}

void GameObject::Draw(SDL_Renderer* graphics)
{

}

void GameObject::Update(input* input)
{
    //tElapsed += aDelta;
    //if (tElapsed >= tDelai)
    //{
    //    tElapsed = 0.0f;
    //    //faire code
    //}
}
