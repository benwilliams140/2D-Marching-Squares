#ifndef BOARD_H
#define BOARD_H

#define _USE_MATH_DEFINES

#include <SFML/Graphics.hpp>
#include <cmath>

#include "Array2D.h"
#include "Window.h"
#include "Square.h"

const unsigned int WIDTH = 10;
const unsigned int HEIGHT = 10;
const unsigned int RECT_SIZE = 25;

class Board
{
public:
	Board();
	~Board();

	void render(Window*);

	int getRenderWidth();
	int getRenderHeight();

private:
	int rectMultiple = 2;
	Array2D<Square*> squares = Array2D<Square*>(WIDTH, HEIGHT);
};

#endif