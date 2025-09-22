#ifndef _BOARD_
#define _BOARD_

#include <vector>
#include "./Cell.hpp"

class Board
{

private:
    size_t rows, cols;
    std::vector<Cell> cells;

public:
    Board(size_t rows, size_t cols);
    std::string out();
};

#endif