#ifndef CHESSMOVECHECKER_HPP_INCLUDED
#define CHESSMOVECHECKER_HPP_INCLUDED

#include "AliasesChess.hpp"
#include "ChessBoard.hpp"

bool checkChessMove(ChessBoard chessBoard, uint8_t startingPosition, uint8_t landingPosition, uint8_t pieceID);

#endif // CHESSMOVECHECKER_HPP_INCLUDED
