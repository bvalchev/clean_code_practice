#include "Square.h"
Square::Square()
{
	piece = EMPTY;
	color = NONE;
}

void Square::setSpace(Square* space)
{
	color = space->getColor();
	piece = space->getPiece();
}

void Square::setEmpty()
{
	color = NONE;
	piece = EMPTY;
}

Piece Square::getPiece()
{
	return piece;
}

Color Square::getColor()
{
	return color;
}

void Square::setPieceAndColor(Piece piece, Color color)
{
	this->piece = piece;
	this->color = color;

}

void Square::setX(int x) 
{ 
    this->x = x; 
}

void Square::setY(int y)
{ 
    this->y = y; 
}

int Square::getX()
{ 
    return x; 
}

int Square::getY()
{ 
    return y; 
}