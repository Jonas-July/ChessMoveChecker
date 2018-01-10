#include "ChessMoveChecker.hpp"
#include "ChessMoveCheckerTest.hpp"

int testChessMoveChecker()
{
    if (checkChessMove(0, 0, 0) != false) return 1;

    return 0;
}
