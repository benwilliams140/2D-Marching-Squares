#include "Square.h"

Square::Square(int _col, int _row, int _size) : col(_col), row(_row), size(_size)
{
	for (int _rad = 0; _rad < 4; ++_rad)
	{
		int _dCol = (int)sin(floor((_rad + 1) / 2) * M_PI_2);
		int _dRow = (int)sin(floor(_rad / 2) * M_PI_2);

		int _xPos = size * (col + _dCol);
		int _yPos = size * (row + _dRow);

		sf::CircleShape _circ(3.0f);
		_circ.setPosition(sf::Vector2f(_xPos, _yPos));
		_circ.setFillColor(rand() % 2 == 0 ? sf::Color::Black : sf::Color::White);

		vertices[_rad] = _circ;
	}
}

Square::~Square()
{

}

void Square::render(Window* _window)
{
	for (int i = 0; i < 4; ++i)
	{
		_window->render(vertices[i]);
	}
}