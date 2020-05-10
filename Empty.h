#include "Piece.h"
class Empty : public Piece
{
    public:
        Empty();
        bool isMoveValid(Square* startingSquare, Square* target);
        void print();
} 