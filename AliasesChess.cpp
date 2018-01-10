#include "AliasesChess.hpp"



uint8_t convertToSquareID(uint8_t row, uint8_t column)
{
    uint8_t squareID = 8 * row + (column);
    return squareID;
}
