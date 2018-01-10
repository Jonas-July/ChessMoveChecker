#include "ChessMoveCheckerTest.hpp"
#include "ChessMoveChecker.hpp"
#include "AliasesChess.hpp"

int testChessMoveChecker()
{
    if (checkChessMove(0, 0, 0) != false) return 1;

    return 0;
}
