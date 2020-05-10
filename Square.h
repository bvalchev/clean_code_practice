#include "Color.h"
#include <string.h>
#include <string>
enum Piece { KING, QUEEN, BISHOP, KNIGHT, ROOK, PAWN, EMPTY };
class Square
{
	Piece piece;
	Color color;
	int x, y;
public:
	void setSpace(Square*);
	void setEmpty();
	void setPieceAndColor(Piece, Color);
	Piece getPiece();
	Color getColor();
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
	Square();
};