
#include "BaseGame.h"
#include <stdlib.h>
#include <string>
#include <iostream>
#include "glew.h"
#include "glfw3.h"

BaseGame::BaseGame() {
	//ventana = new Window();
	//render = new Renderer();
}
BaseGame::~BaseGame() {

}

int BaseGame::StartWindow(int width, int height, const char* windowName)
{
	return ventana.Start(width, height, windowName);
}

void BaseGame::CloseWindow()
{
	ventana.CloseWindow();
}

void BaseGame::drawTriangle(CVec4 pos1, CVec4 pos2, CVec4 pos3)

{

	//render.DrawTriangle(pos1, pos2, pos3);
}

void BaseGame::update()
{
	StartWindow(1280, 720, "Hello World");

	CVec4 pos1 = { -0.5f, -0.5f, 1,1, BLUE };
	CVec4 pos2 = { 0.5f, -0.5f,1,1, BLUE };
	CVec4 pos3 = { 0.0f, 0.5f,1,1, BLUE };
	while (!ventana.WindowShouldClose())
	{
		ventana.ClearBackground();

		pos1 = { -0.5f, -0.5f,1,1, BLUE };
		pos2 = { 0.5f, -0.5f,1,1, BLUE };
		pos3 = { 0.0f, 0.5f,1,1, BLUE };
		//render.DrawTriangle(pos1, pos2, pos3);




		ventana.FinishWindowCycle();

	}
	CloseWindow();

}

