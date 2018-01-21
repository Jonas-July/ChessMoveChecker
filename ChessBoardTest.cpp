#include "ChessBoard.hpp"
#include "ChessMoveCheckerTest.hpp"
#include "ChessMoveChecker.hpp"
#include "AliasesChess.hpp"

int testPieceMovement()
{
    ChessBoard Board;
    Board.movePiece(convertToSquareID("D2"), convertToSquareID("D4"));
    if (Board.getPieceFromPosition(convertToSquareID("D2")) != 35) return 1;
    if (Board.getPieceFromPosition(convertToSquareID("D4")) != 12) return 2;
    Board.movePiece(convertToSquareID("D7"), convertToSquareID("D5"));
    if (Board.getPieceFromPosition(convertToSquareID("D7")) != 35) return 3;
    if (Board.getPieceFromPosition(convertToSquareID("D5")) != 29) return 4;
    Board.movePiece(convertToSquareID("B1"), convertToSquareID("C3"));
    if (Board.getPieceFromPosition(convertToSquareID("B1")) != 35) return 5;
    if (Board.getPieceFromPosition(convertToSquareID("C3")) !=  1) return 6;
    Board.movePiece(convertToSquareID("G8"), convertToSquareID("F6"));
    if (Board.getPieceFromPosition(convertToSquareID("G8")) != 35) return 7;
    if (Board.getPieceFromPosition(convertToSquareID("F6")) != 18) return 8;

    Board.printBoardLayout();

    return 0;
}
