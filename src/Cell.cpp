#include "../include/Cell.hpp"

Cell::Cell(bool border)
{
    this->isBorder = border;
}

void Cell::setAlive()
{
    if (this->isBorder)
    {
        return;
    }
    this->isAlive = true;
}

void Cell::kill()
{
    this->isAlive = false;
}

std::string Cell::out()
{
    if (this->isBorder)
    {
        return "B";
    }
    if (this->isAlive)
    {
        return "A";
    }
    return ".";
}