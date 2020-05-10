#include "Piece.h"
class Queen : public Piece
{
    public:
        Queen(Color color);
        bool isMoveValid(Square* startingSquare, Square* target);
        void print();
} 