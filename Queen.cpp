#include "Queen.h"

bool Queen::isMoveValid(Square* startingSquare, Square* target)
{
	return (isVerticalMove(startingSquare, target) || 
            isHorizontalMove(startingSquare, target) || 
            isDiagonalMove(startingSquare, target))
}

void Queen::print()
{
    Color colorOfQueen = getColor();
    (colorOfQueen == WHITE) ? cout << " Q " : cout << " q ";
}

Queen:Queen(Color color) : Piece(color);