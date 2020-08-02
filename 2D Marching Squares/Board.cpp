#include "Board.h"

Board::Board()
{
	for (int _col = 0; _col < WIDTH; ++_col)
	{
		for (int _row = 0; _row < HEIGHT; ++_row)
		{
			squares[_col][_row] = new Square(_col * rectMultiple, _row * rectMultiple, RECT_SIZE);
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
			squares[_col][_row]->render(_window);
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