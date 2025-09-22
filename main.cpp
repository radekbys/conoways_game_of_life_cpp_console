#include <iostream>
#include "./include/Board.hpp"

int main()
{
    std::cout << "Hello World!" << std::endl
              << __cplusplus << std::endl;

    std::cout << std::endl;

    Board board = Board(20, 20);

    std::cout << board.out();

    return 0;
}