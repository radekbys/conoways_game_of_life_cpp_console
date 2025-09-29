#include "../include/Board.hpp"

Board::Board(size_t cols, size_t rows)
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

void Board::switchCell(Cell &cell)
{
    if (cell.out() == ".")
    {
        cell.setAlive();
    }
    else
    {
        cell.kill();
    }
}

void Board::selectCells()
{
    int16_t x = (this->cols - (this->cols % 2)) / 2;
    int16_t y = (this->rows - (this->rows % 2)) / 2;
    bool finish = false;

    initscr();
    curs_set(1);
    keypad(stdscr, TRUE);

    while (!finish)
    {
        clear();
        printw(Board::out().c_str());
        printw("select cells using arrow keys and spacebar, then press enter to run simulation");
        refresh();
        move(y, x);
        int character = getch();

        switch (character)
        {
        case KEY_UP:
            if (y > 1)
            {
                y--;
            }
            break;

        case KEY_DOWN:
            if (y < (this->rows - 2))
            {
                y++;
            }
            break;

        case KEY_LEFT:
            if (x > 1)
            {
                x--;
            }
            break;

        case KEY_RIGHT:
            if (x < (this->cols - 2))
            {
                x++;
            }
            break;

        case ' ':
            Board::switchCell(this->cells[x + (y * this->cols)]);
            break;

        case '\n':
            finish = true;
            break;

        default:
            break;
        }
    }
    clear();
    endwin();
}

void Board::runSimulation()
{
}