#include "AliasesChess.hpp"


uint8_t convertToSquareID(const std::string column, uint8_t row)
{
    int columnNum = 0;
    if (column == "A") columnNum = 0;
    if (column == "B") columnNum = 1;
    if (column == "C") columnNum = 2;
    if (column == "D") columnNum = 3;
    if (column == "E") columnNum = 4;
    if (column == "F") columnNum = 5;
    if (column == "G") columnNum = 6;
    if (column == "H") columnNum = 7;

    uint8_t squareID = 8 * (columnNum) + row-1;
    return squareID;
}
