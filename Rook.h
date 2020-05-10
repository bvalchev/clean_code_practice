#include "Piece.h"
class Rook : public Piece
{
    public:
        Rook(Color color);
        bool isMoveValid(Square* startingSquare, Square* target);
        void print();
} 