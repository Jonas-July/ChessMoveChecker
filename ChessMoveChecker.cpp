#include "ChessMoveChecker.hpp"
#include "AliasesChess.hpp"

#include <iostream>

void ChessBoard::printBoardLayout()
{
    for (unsigned int i = 0; i < 64; i++)
    {
        if (i % 8 == 0)
        {
            std::cout << std::endl;
        }
        std::cout << (int)boardLayout[i] << ", ";
    }
    std::cout << std::endl;
}

int ChessBoard::getPieceFromPosition(uint8_t position)
{
    return (int)boardLayout[position];
}

void ChessBoard::movePiece(uint8_t startingPos, uint8_t landingPos)
{
    boardLayout[landingPos] = boardLayout[startingPos];
    boardLayout[startingPos] = ChessBoard::Blank;

}

bool checkChessMove(uint8_t startingPosition, uint8_t landingPosition, uint8_t pieceID)
{
    return false;
}
