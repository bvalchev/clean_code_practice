#include "Piece.h"
class Bishop : public Piece
{
    public:
        Bishop(Color color);
        bool isMoveValid(Square* startingSquare, Square* target);
        void print();
} 