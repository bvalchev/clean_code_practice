#include "Pawn.h"

bool Pawn::isMoveValid(Square* startingSquare, Square* target)
{
    return ((pawnX == thatX && thatY == pawnY + 1) ||
            ((pawnX + 1 == thatX || pawnX - 1 == thatX) && pawnY + 1 == thatY ));
}

void Pawn::print()
{
    Color colorOfBishop = getColor();
    (colorOfBishop == WHITE) ? cout << " P " : cout << " p ";
}

Pawn:Pawn(Color color) : Piece(color);