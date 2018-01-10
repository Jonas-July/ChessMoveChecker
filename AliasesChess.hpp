#ifndef PIECENAMES_HPP_INCLUDED
#define PIECENAMES_HPP_INCLUDED

#include <stdint.h>

struct PieceNames
{
    uint8_t pawn = 0;
};

uint8_t convertToSquareID(uint8_t row, uint8_t column);

#endif // PIECENAMES_HPP_INCLUDED
