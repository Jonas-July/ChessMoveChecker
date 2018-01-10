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
    Board.movePiece(convertToSquareID("B", 1), convertToSquareID("C", 3));
    if (Board.getPieceFromPosition(convertToSquareID("B", 1)) != 35) return 5;
    if (Board.getPieceFromPosition(convertToSquareID("C", 3)) !=  1) return 6;
    Board.movePiece(convertToSquareID("G", 8), convertToSquareID("F", 6));
    if (Board.getPieceFromPosition(convertToSquareID("G", 8)) != 35) return 7;
    if (Board.getPieceFromPosition(convertToSquareID("F", 6)) != 18) return 8;

    Board.printBoardLayout();

    return 0;
}
