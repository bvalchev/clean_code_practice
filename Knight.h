#include "Piece.h"
class Knight : public Piece
{
    public:
        Knight(Color color);
        bool isMoveValid(Square* startingSquare, Square* target);
        void print();
} 