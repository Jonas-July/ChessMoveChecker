#include <iostream>

#include "AliasesChessTest.hpp"
#include "AliasesChess.hpp"


int testConvertToSquareID()
{
    if (convertToSquareID("A", 1) != 0) return 1;
    if (convertToSquareID("A", 8) != 7) return 2;
    if (convertToSquareID("B", 1) != 8) return 3;
    if (convertToSquareID("B", 5) != 12) return 4;
    if (convertToSquareID("D", 2) != 25) return 5;
    if (convertToSquareID("H", 8) != 63) return 6;
    if (convertToSquareID("F", 7) != 46) return 7;
    if (convertToSquareID("C", 4) != 19) return 8;

    return 0;
}
