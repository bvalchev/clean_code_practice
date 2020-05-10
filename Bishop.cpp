#include "Bishop.h"

bool Bishop::isMoveValid(Square* startingSquare, Square* target)
{
    int startingSquareX = startingSquare->getX();
	int startingSquareY = startingSquare->getY();
	int targetX = target->getX();
	int targetY = target->getY();
    return ((abs(startingSquareX - targetX) == 2 && abs(startingSquareY - targetY) == 1) || 
            (abs(startingSquareX - targetX) == 1 && abs(startingSquareY - targetY) == 2));
}

void Bishop::print()
{
    Color colorOfBishop = getColor();
    (colorOfBishop == WHITE) ? cout << " B " : cout << " b ";
}

Bishop:Bishop(Color color) : Piece(color);