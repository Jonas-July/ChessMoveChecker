#ifndef CHESSMOVECHECKER_HPP_INCLUDED
#define CHESSMOVECHECKER_HPP_INCLUDED

#include <stdint.h>
#include <vector>

#include "AliasesChess.hpp"

class ChessBoard
{
public:
    void printBoardLayout();
    void movePiece(uint8_t startingPos, uint8_t landingPos);
    int getPieceFromPosition(uint8_t position);

private:

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

    uint8_t boardLayout[64] =
    {
     WhiteRookLeft   , WhitePawnA, Blank, Blank, Blank, Blank, BlackPawnA, BlackRookRight  ,
     WhiteKnightLeft , WhitePawnB, Blank, Blank, Blank, Blank, BlackPawnB, BlackKnightRight,
     WhiteBishopBlack, WhitePawnC, Blank, Blank, Blank, Blank, BlackPawnC, BlackBishopWhite,
     WhiteQueen      , WhitePawnD, Blank, Blank, Blank, Blank, BlackPawnD, BlackKing       ,
     WhiteKing       , WhitePawnE, Blank, Blank, Blank, Blank, BlackPawnE, BlackQueen      ,
     WhiteBishopWhite, WhitePawnF, Blank, Blank, Blank, Blank, BlackPawnF, BlackBishopBlack,
     WhiteKnightRight, WhitePawnG, Blank, Blank, Blank, Blank, BlackPawnG, BlackKnightLeft ,
     WhiteRookRight  , WhitePawnH, Blank, Blank, Blank, Blank, BlackPawnH, BlackRookLeft
    };

};


bool checkChessMove(uint8_t startingPosition, uint8_t landingPosition, uint8_t pieceID);

#endif // CHESSMOVECHECKER_HPP_INCLUDED
