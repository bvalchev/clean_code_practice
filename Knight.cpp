#include "Knight.h"

bool Knight::isMoveValid(Square* startingSquare, Square* target)
{
    return (isDiagonalMove(Square* startingSquare, Square* target));
}

void Knight::print()
{
    Color colorOfBishop = getColor();
    (colorOfBishop == WHITE) ? cout << " H " : cout << " h ";
}

Knight:Knight(Color color) : Piece(color);