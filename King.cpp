#include "King.h"

bool King::isMoveValid(Square* startingSquare, Square* target)
{
    return (abs(target->getX() - startingSquare->getX()) <= 1 || 
            abs(target->getY() - startingSquare->getY()) <= 1)
}

void King::print()
{
    Color colorOfKing = getColor();
    (colorOfKing == WHITE) ? cout << " K " : cout << " k ";
}

King:King(Color color) : Piece(color);