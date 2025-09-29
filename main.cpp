#include <iostream>
#include "./include/Board.hpp"

int main()
{
    std::cout << "Hello World!" << std::endl
              << __cplusplus << std::endl;

    std::cout << std::endl;

    Board board = Board(40, 20);

    board.selectCells();

    return 0;
}