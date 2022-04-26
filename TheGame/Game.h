#pragma once
#include <string>
#include <vector>
#include "IInput.h"

struct SDL_Window;
struct SDL_Renderer;
class GameObject;

class Game : public input
{
public:
	bool Init(const std::string& title, int width, int heigth);
	void Start();
	bool IsKeyDown(int code);
	bool IsMouseButtonDown(int button);
	void MousePosition(int* x, int* y);
	void Add(GameObject* object);


private:
	bool CreateGameWindow(const std::string& title, int width, int heigth);
	bool CreateRenderer();
	void Close();
	void ProcessInput();
	void UpdateLogic();
	void RenderFrame();
	

private:
	SDL_Window* m_Window;
	SDL_Renderer* m_Graphics;
	bool m_Running = false;
	const unsigned char* m_Keyboard = nullptr;
	bool m_MouState[3] = { false,false,false };
	int m_MouseX = 0;
	int m_MouseY = 0;
	std::vector<GameObject*> m_World;
};
