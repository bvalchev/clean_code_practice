#include "Rook.h"

bool Rook::isMoveValid(Square* startingSquare, Square* target)
{
    return (isVerticalMove(startingSquare, target) || 
            isHorizontalMove(startingSquare, target));
}

void Rook::print()
{
    Color colorOfRook = getColor();
    (colorOfRook == WHITE) ? cout << " R " : cout << " r ";
}

Rook:Rook(Color color) : Piece(color);