#include "Square.h"
#include "Color.h"
class Piece 
{
    public:
        Piece(Color color); 
        Color getColor();
        void setColor(Color);
        virtual bool isMoveValid(Square* startingSquare, Square* target) = 0;
        virtual void print() = 0;
    private:
        Color color;
        bool isHorizontalMove(Square* startingSquare, Square* target);
        bool isVerticalMove(Square* startingSquare, Square* target);
        bool isDiagonalMove(Square* startingSquare, Square* target);
}