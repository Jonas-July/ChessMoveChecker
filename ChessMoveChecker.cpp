#include "ChessMoveChecker.hpp"
#include "ChessBoard.hpp"
#include "AliasesChess.hpp"

bool checkChessMove(ChessBoard chessBoard, uint8_t startingPosition, uint8_t landingPosition)
{
    ChessPiece movedPiece = chessBoard.getPieceFromPosition(startingPosition);
    ChessPiece landingPiece = chessBoard.getPieceFromPosition(landingPosition);

    if (movedPiece.getID() == 0) return false;
    if (landingPiece == BlankSquare()) return true;

    return false;
}

bool checkWin(ChessBoard chessBoard, ChessPiece attacker, uint8_t landingPosition)
{
    if (chessBoard.getPieceFromPosition(landingPosition) == King(!attacker.getColor())) return true;
    else return false;

}
