#ifndef APPLICATION_H
#define APPLICATION_H

#include "GUI.h"
#include "Window.h"

const unsigned int GUI_WIDTH = 200;
const unsigned int WINDOW_WIDTH = GUI_WIDTH + 700;
const unsigned int WINDOW_HEIGHT = 500;
const std::string WINDOW_TITLE = "2D Marching Squares";

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

	Window* window;
	GUI* gui;
};

#endif