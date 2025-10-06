#ifndef _BOARD_
#define _BOARD_

#include <vector>
#include <ncurses.h>
#include <cstdlib>
#include <iostream>
#include <chrono>
#include <thread>

#include "./Cell.hpp"

class Board
{

private:
    size_t rows, cols;
    std::vector<Cell> cells;
    int generations;
    void switchCell(Cell &cell);

public:
    Board(size_t cols = 40, size_t rows = 20, int gens = 20);
    std::string out();
    void selectCells();
    void runSimulation();
};

#endif