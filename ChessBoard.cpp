#include <iostream>

#include "ChessBoard.hpp"

void ChessBoard::printBoardLayout()
{
    for (unsigned int i = 0; i < 64; i++)
    {
        if (i % 8 == 0)
        {
            std::cout << std::endl;
        }
        std::cout << (m_boardLayout[i]).getID() << ", ";
    }
    std::cout << std::endl;
}

ChessPiece ChessBoard::getPieceFromPosition(uint8_t position)
{
    return m_boardLayout[position];
}

void ChessBoard::movePiece(uint8_t startingPos, uint8_t landingPos)
{
    m_boardLayout[landingPos] = m_boardLayout[startingPos];
    m_boardLayout[startingPos] = ChessBoard::Blank;

}

void generateStartingChessBoard(ChessPiece boardLayout[])
{
    uint8_t white = 0;
    uint8_t black = 1;

    BlankSquare Blank = BlankSquare();

    Rook   WhiteRookLeft    = Rook   (white);
    Knight WhiteKnightLeft  = Knight (white);
    Bishop WhiteBishopBlack = Bishop (white);
    King   WhiteKing        = King   (white);
    Queen  WhiteQueen       = Queen  (white);
    Bishop WhiteBishopWhite = Bishop (white);
    Knight WhiteKnightRight = Knight (white);
    Rook   WhiteRookRight   = Rook   (white);

    Pawn WhitePawnA = Pawn(white);
    Pawn WhitePawnB = Pawn(white);
    Pawn WhitePawnC = Pawn(white);
    Pawn WhitePawnD = Pawn(white);
    Pawn WhitePawnE = Pawn(white);
    Pawn WhitePawnF = Pawn(white);
    Pawn WhitePawnG = Pawn(white);
    Pawn WhitePawnH = Pawn(white);

    Rook   BlackRookLeft    = Rook   (black);
    Knight BlackKnightLeft  = Knight (black);
    Bishop BlackBishopBlack = Bishop (black);
    King   BlackKing        = King   (black);
    Queen  BlackQueen       = Queen  (black);
    Bishop BlackBishopWhite = Bishop (black);
    Knight BlackKnightRight = Knight (black);
    Rook   BlackRookRight   = Rook   (black);

    Pawn BlackPawnA = Pawn(black);
    Pawn BlackPawnB = Pawn(black);
    Pawn BlackPawnC = Pawn(black);
    Pawn BlackPawnD = Pawn(black);
    Pawn BlackPawnE = Pawn(black);
    Pawn BlackPawnF = Pawn(black);
    Pawn BlackPawnG = Pawn(black);
    Pawn BlackPawnH = Pawn(black);

    ChessPiece stdBoardLayout[64] =
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

    for (int i = 0; i < 64; i++)
    {
        boardLayout[i] = stdBoardLayout[i];
    }

}

void movePiece(ChessPiece boardLayout[], uint8_t startingPos, uint8_t landingPos)
{
    boardLayout[landingPos] = boardLayout[startingPos];
    boardLayout[startingPos] = BlankSquare();
}
