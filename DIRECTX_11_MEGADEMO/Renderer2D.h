#pragma once

#include "debug.h"
#include "DXResources.h"
#include "stdafx.h"
#include "Console.h"
class Renderer2D
{
public:
	Renderer2D(DXResources* _dx);
	//~Renderer2D() { delete console; }

	void Render();
	std::shared_ptr<Console> console;
private:
	DXResources* dx;
};
