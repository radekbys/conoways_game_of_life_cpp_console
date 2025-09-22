#ifndef _CELL_
#define _CELL_

#include <string>

class Cell
{
private:
    bool isBorder = false;
    bool isAlive = false;

public:
    Cell(bool border);

    void setAlive();
    void kill();
    std::string out();
};

#endif