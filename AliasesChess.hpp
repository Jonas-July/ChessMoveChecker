#ifndef PIECENAMES_HPP_INCLUDED
#define PIECENAMES_HPP_INCLUDED

#include <stdint.h>
#include <string>

struct PieceNames
{
    uint8_t WhiteRookLeft    = 0;
    uint8_t WhiteKnightLeft  = 1;
    uint8_t WhiteBishopBlack = 2;
    uint8_t WhiteKing        = 3;
    uint8_t WhiteKingMoved   = 4;
    uint8_t WhiteQueen       = 5;
    uint8_t WhiteBishopWhite = 6;
    uint8_t WhiteKnightRight = 7;
    uint8_t WhiteRookRight   = 8;

    uint8_t WhitePawnA =  9;
    uint8_t WhitePawnB = 10;
    uint8_t WhitePawnC = 11;
    uint8_t WhitePawnD = 12;
    uint8_t WhitePawnE = 13;
    uint8_t WhitePawnF = 14;
    uint8_t WhitePawnG = 15;
    uint8_t WhitePawnH = 16;

    uint8_t BlackRookLeft    = 17;
    uint8_t BlackKnightLeft  = 18;
    uint8_t BlackBishopBlack = 19;
    uint8_t BlackKing        = 20;
    uint8_t BlackKingMoved   = 21;
    uint8_t BlackQueen       = 22;
    uint8_t BlackBishopWhite = 23;
    uint8_t BlackKnightRight = 24;
    uint8_t BlackRookRight   = 25;

    uint8_t BlackPawnA = 26;
    uint8_t BlackPawnB = 27;
    uint8_t BlackPawnC = 28;
    uint8_t BlackPawnD = 29;
    uint8_t BlackPawnE = 31;
    uint8_t BlackPawnF = 32;
    uint8_t BlackPawnG = 33;
    uint8_t BlackPawnH = 34;

    uint8_t Blank = 35;

};

uint8_t convertToSquareID(const std::string position);

#endif // PIECENAMES_HPP_INCLUDED
