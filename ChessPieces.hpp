#ifndef CHESSPIECES_HPP_INCLUDED
#define CHESSPIECES_HPP_INCLUDED

#include <stdint.h>

class ChessPiece
{
public:
    ChessPiece();
    int getID() const;
    bool getColor() const;

    bool operator==(const ChessPiece &otherPiece);
    bool operator!=(const ChessPiece &otherPiece);

    uint8_t color;
    int PieceID;
};

class BlankSquare: public ChessPiece
{
public:
    BlankSquare();
};

class Rook: public ChessPiece
{
public:
    Rook(uint8_t color);
private:
    bool hasMoved = false;
};

class Knight: public ChessPiece
{
public:
    Knight(uint8_t color);
};

class Bishop: public ChessPiece
{
public:
    Bishop(uint8_t color);
};

class King: public ChessPiece
{
public:
    King(uint8_t color);
    bool hasMoved = false;
};

class Queen: public ChessPiece
{
public:
    Queen(uint8_t color);
};

class Pawn: public ChessPiece
{
public:
    Pawn(uint8_t color);
    bool hasMoved = false;
};

#endif // CHESSPIECES_HPP_INCLUDED
