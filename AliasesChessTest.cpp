#include <iostream>

#include "AliasesChessTest.hpp"
#include "AliasesChess.hpp"


int testConvertToSquareID()
{
    if (convertToSquareID(0, 0) != 0) return 1;
    if (convertToSquareID(0, 7) != 7) return 2;
    if (convertToSquareID(1, 0) != 8) return 3;
    if (convertToSquareID(1, 4) != 12) return 4;
    if (convertToSquareID(3, 1) != 25) return 5;
    if (convertToSquareID(7, 7) != 63) return 6;
    if (convertToSquareID(5, 6) != 46) return 7;
    if (convertToSquareID(2, 3) != 19) return 8;

    return 0;
}
