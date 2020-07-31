#ifndef APPLICATION_H
#define APPLICATION_H

#include "GUI.h"
#include "Window.h"
#include "Board.h"

const std::string WINDOW_TITLE = "2D Marching Squares";
const unsigned int GUI_WIDTH = 200;

class Application
{
public:
	Application();
	~Application();

	void start();

private:
	void loop();
	void getInput();
	void update(float);
	void render();

	void initGUI();

	Window* window = NULL;
	GUI* gui = NULL;

	Board* board = NULL;
};

#endif