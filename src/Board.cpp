#include "../include/Board.hpp"

Board::Board(size_t rows, size_t cols)
{
    this->rows = rows;
    this->cols = cols;

    this->cells = std::vector<Cell>(rows * cols, Cell(false));

    for (size_t i = 0; i < cols; i++)
    {
        this->cells[i] = Cell(true);
        this->cells[(rows - 1) * cols + i] = Cell(true);
    }

    for (size_t i = 0; i < rows; i++)
    {
        this->cells[i * cols] = Cell(true);
        this->cells[(cols - 1) + (i * cols)] = Cell(true);
    }
}

std::string Board::out()
{
    std::string output = "";

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            output += this->cells[(i * cols) + j].out();
        }
        output += "\n";
    }

    return output;
}