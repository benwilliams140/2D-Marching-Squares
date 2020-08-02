#ifndef SQUARE_H
#define SQUARE_H

#define _USE_MATH_DEFINES

#include <SFML/Graphics.hpp>
#include <cmath>

#include "Window.h"

class Square
{
public:
	Square(int, int, int);
	~Square();

	void render(Window*);

private:
	int col, row, size;
	sf::CircleShape vertices[4]; // top-left, top-right, bottom-right, bottom-left
};

#endif