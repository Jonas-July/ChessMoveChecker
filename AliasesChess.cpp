#include "AliasesChess.hpp"


uint8_t convertToSquareID(const std::string position)
{
    const char column = position[0];
    const char row = position[1];
    const char* a = "ABCDEFGH12345678";

    int columnNum = 0;
    if (column == a[0]) columnNum = 0;
    if (column == a[1]) columnNum = 1;
    if (column == a[2]) columnNum = 2;
    if (column == a[3]) columnNum = 3;
    if (column == a[4]) columnNum = 4;
    if (column == a[5]) columnNum = 5;
    if (column == a[6]) columnNum = 6;
    if (column == a[7]) columnNum = 7;

    int rowNum = 0;
    if (row == a[ 8]) rowNum = 0;
    if (row == a[ 9]) rowNum = 1;
    if (row == a[10]) rowNum = 2;
    if (row == a[11]) rowNum = 3;
    if (row == a[12]) rowNum = 4;
    if (row == a[13]) rowNum = 5;
    if (row == a[14]) rowNum = 6;
    if (row == a[15]) rowNum = 7;

    uint8_t squareID = 8 * columnNum + rowNum;
    return squareID;
}
