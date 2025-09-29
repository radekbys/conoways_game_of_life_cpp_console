#ifndef _BOARD_
#define _BOARD_

#include <vector>
#include <ncurses.h>
#include <cstdlib>
#include <iostream>
#include "./Cell.hpp"

class Board
{

private:
    size_t rows, cols;
    std::vector<Cell> cells;
    void switchCell(Cell &cell);

public:
    Board(size_t rows, size_t cols);
    std::string out();
    void selectCells();
    void runSimulation();
};

#endif