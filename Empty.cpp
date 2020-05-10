#include "Empty.h"

bool Empty::isMoveValid(Square* startingSquare, Square* target)
{
    return false;
}

void Empty::print()
{
    cout << " " << "\21" << " ";
}

Empty:Empty() : Piece(EMPTY);