#include "ChessBoard.hpp"
#include "ChessPieces.hpp"
#include "ChessMoveCheckerTest.hpp"
#include "ChessMoveChecker.hpp"
#include "AliasesChess.hpp"

int testPieceMovement()
{
    ChessBoard Board;
    Board.movePiece(convertToSquareID("D2"), convertToSquareID("D4"));
    if (Board.getPieceFromPosition(convertToSquareID("D2")) != BlankSquare()) return 1;
    if (Board.getPieceFromPosition(convertToSquareID("D4")) != Pawn(Board.white)) return 2;
    Board.movePiece(convertToSquareID("D7"), convertToSquareID("D5"));
    if (Board.getPieceFromPosition(convertToSquareID("D7")) != BlankSquare()) return 3;
    if (Board.getPieceFromPosition(convertToSquareID("D5")) != Pawn(Board.black)) return 4;
    Board.movePiece(convertToSquareID("B1"), convertToSquareID("C3"));
    if (Board.getPieceFromPosition(convertToSquareID("B1")) != BlankSquare()) return 5;
    if (Board.getPieceFromPosition(convertToSquareID("C3")) !=  Knight(Board.white)) return 6;
    Board.movePiece(convertToSquareID("G8"), convertToSquareID("F6"));
    if (Board.getPieceFromPosition(convertToSquareID("G8")) != BlankSquare()) return 7;
    if (Board.getPieceFromPosition(convertToSquareID("F6")) != Knight(Board.black)) return 8;

    Board.printBoardLayout();

    ChessPiece boardLayout[64];
    generateStartingChessBoard(boardLayout);

    movePiece(boardLayout, convertToSquareID("D2"), convertToSquareID("D4"));
    if (boardLayout[convertToSquareID("D2")] != BlankSquare()) return 9;
    if (boardLayout[convertToSquareID("D4")] != Pawn(PieceColors::white)) return 10;
    movePiece(boardLayout, convertToSquareID("D7"), convertToSquareID("D5"));
    if (boardLayout[convertToSquareID("D7")] != BlankSquare()) return 11;
    if (boardLayout[convertToSquareID("D5")] != Pawn(PieceColors::black)) return 12;
    movePiece(boardLayout, convertToSquareID("B1"), convertToSquareID("C3"));
    if (boardLayout[convertToSquareID("B1")] != BlankSquare()) return 13;
    if (boardLayout[convertToSquareID("C3")] !=  Knight(PieceColors::white)) return 14;
    movePiece(boardLayout, convertToSquareID("G8"), convertToSquareID("F6"));
    if (boardLayout[convertToSquareID("G8")] != BlankSquare()) return 15;
    if (boardLayout[convertToSquareID("F6")] != Knight(PieceColors::black)) return 16;

    return 0;
}
