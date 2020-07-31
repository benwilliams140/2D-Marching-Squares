#include "Board.h"

Board::Board()
{
	for (int _col = 0; _col < WIDTH; ++_col)
	{
		for (int _row = 0; _row < HEIGHT; ++_row)
		{
			sf::RectangleShape _rect(sf::Vector2f(RECT_SIZE, RECT_SIZE));
			_rect.setPosition(_col * RECT_SIZE * rectMultiple, _row * RECT_SIZE * rectMultiple);
			//squares[_col][_row] = _rect;
		}
	}
}

Board::~Board()
{

}

void Board::render(Window* _window)
{
	for (int _col = 0; _col < WIDTH; ++_col)
	{
		for (int _row = 0; _row < HEIGHT; ++_row)
		{
			//if (_col != 9) break;

			for (int _rad = 0; _rad < 4; ++_rad)
			{

				//sf::RectangleShape _rect = squares[_col][_row];

				int _dCol = (int)sin(floor((_rad + 1) / 2) * M_PI_2);
				int _dRow = (int)sin(floor(_rad / 2) * M_PI_2);

				int _xPos = _col * rectMultiple * RECT_SIZE + _dCol * RECT_SIZE;
				int _yPos = _row * rectMultiple * RECT_SIZE + _dRow * RECT_SIZE;

				sf::CircleShape _circ(3.0f);
				_circ.setPosition(sf::Vector2f(_xPos, _yPos));
				_circ.setFillColor(sf::Color::Black);

				_window->render(_circ);
			}
		}
	}
}

int Board::getRenderWidth()
{
	return WIDTH * RECT_SIZE * rectMultiple;
}

int Board::getRenderHeight()
{
	return HEIGHT * RECT_SIZE * rectMultiple;
}