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
        std::cout << (int)m_boardLayout[i] << ", ";
    }
    std::cout << std::endl;
}

int ChessBoard::getPieceFromPosition(uint8_t position)
{
    return (int)m_boardLayout[position];
}

void ChessBoard::movePiece(uint8_t startingPos, uint8_t landingPos)
{
    m_boardLayout[landingPos] = m_boardLayout[startingPos];
    m_boardLayout[startingPos] = ChessBoard::Blank;

}
