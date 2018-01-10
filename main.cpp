#include <iostream>

#include "ChessMoveCheckerTest.hpp"
#include "AliasesChessTest.hpp"

int main()
{
    int passing = 0;

    std::cout << "Currently Testing: ChessMoveChecker" << std::endl;
    passing = testChessMoveChecker();
    std::cout << "Testing Done: " << passing << std::endl;

    std::cout << "Currently Testing: convertToSquareID" << std::endl;
    passing = testConvertToSquareID();
    std::cout << "Testing Done: " << passing << std::endl;
//
    return passing;
}
