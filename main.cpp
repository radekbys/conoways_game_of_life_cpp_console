#include <iostream>
#include <cstdlib>
#include "./include/Board.hpp"

int main(int argc, char *argv[])
{
    Board board;

    if (argc == 4)
        board = Board(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
    else
        board = Board();

    board.selectCells();
    board.runSimulation();

    return 0;
}