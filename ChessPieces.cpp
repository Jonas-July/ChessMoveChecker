#include "ChessPieces.hpp"

#include <iostream>

ChessPiece::ChessPiece()
{

}

int ChessPiece::getID() const
{
    return PieceID;
}

bool ChessPiece::getColor() const
{
    return color;
}

bool ChessPiece::operator==(const ChessPiece &otherPiece)
{
    if (PieceID == otherPiece.getID()) return true;
    else return false;
}

bool ChessPiece::operator!=(const ChessPiece &otherPiece)
{
    if (PieceID != otherPiece.getID()) return true;
    else return false;
}

BlankSquare::BlankSquare()
{
    PieceID = 0;
    color = 2;
}

Rook::Rook(uint8_t color)
{
    color = color;
    PieceID = 1 + 6 * color;
}

Knight::Knight(uint8_t color)
{
    color = color;
    PieceID = 2 + 6 * color;
}

Bishop::Bishop(uint8_t color)
{
    color = color;
    PieceID = 3 + 6 * color;
}

King::King(uint8_t color)
{
    color = color;
    PieceID = 4 + 6 * color;
}

Queen::Queen(uint8_t color)
{
    color = color;
    PieceID = 5 + 6 * color;
}

Pawn::Pawn(uint8_t color)
{
    color = color;
    PieceID = 6 + 6 * color;
}
