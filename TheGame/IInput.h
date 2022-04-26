#pragma once

class input
{
public:
	virtual bool IsKeyDown(int code) = 0;
	virtual bool IsMouseButtonDown(int button) = 0;
	virtual void MousePosition(int* x, int* y) = 0;
};