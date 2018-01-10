#include "ChessMoveCheckerTest.hpp"
#include "ChessMoveChecker.hpp"
#include "AliasesChess.hpp"

int testChessMoveChecker()
{
    ChessBoard Board;
    Board.movePiece(convertToSquareID("D", 2), convertToSquareID("D", 4));
    if (Board.getPieceFromPosition(convertToSquareID("D", 2)) != 35) return 1;
    if (Board.getPieceFromPosition(convertToSquareID("D", 4)) != 12) return 2;
    Board.movePiece(convertToSquareID("D", 7), convertToSquareID("D", 5));
    if (Board.getPieceFromPosition(convertToSquareID("D", 7)) != 35) return 3;
    if (Board.getPieceFromPosition(convertToSquareID("D", 5)) != 29) return 4;

    return 0;
}
