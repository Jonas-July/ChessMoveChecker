#include <iostream>

#include "AliasesChessTest.hpp"
#include "AliasesChess.hpp"


int testConvertToSquareID()
{
    if (convertToSquareID("A1") != 0) return 1;
    if (convertToSquareID("A8") != 7) return 2;
    if (convertToSquareID("B1") != 8) return 3;
    if (convertToSquareID("B5") != 12) return 4;
    if (convertToSquareID("D2") != 25) return 5;
    if (convertToSquareID("H8") != 63) return 6;
    if (convertToSquareID("F7") != 46) return 7;
    if (convertToSquareID("C4") != 19) return 8;

    return 0;
}
