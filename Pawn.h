#include "Piece.h"
class Pawn : public Piece
{
    public:
        Pawn(Color color);
        bool isMoveValid(Square* startingSquare, Square* target);
        void print();
} 