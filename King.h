#include "Piece.h"
class King : public Piece
{
    public:
        King(Color color);
        bool isMoveValid(Square* startingSquare, Square* target);
        void print();
} 