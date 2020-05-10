#include "Piece.h"

Piece::Piece(Color color)
{
    setColor(Color);
}
 
Color Piece::getColor()
{
    return color;
}

void Piece::setColor(Color color)
{
    this->color = color;
}

bool Piece::isHorizontalMove(Square* startingSquare, Square* target)
{
    return (target->getX() != startingSquare->getX() && target->getY() == startingSquareY->getY());
}
        
bool Piece::isVerticalMove(Square* startingSquare, Square* target)
{
    return (target->getY() != startingSquare->getY() && target->getX() == startingSquareY->getX());
}
        
bool Piece::isDiagonalMove(Square* startingSquare, Square* target)
{
    return (abs(startingSquare->getX() - target->getX()) == abs(startingSquare->getY() - target->getY()));
}