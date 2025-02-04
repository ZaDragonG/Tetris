#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

class Block{
    public:
        Block();
        void Draw(int offestX, int offSetY);
        void Move(int rows, int columns);
        int id;
        std::map<int , std::vector<Position> > cells;
        std::vector<Position> GetCellPositions();
        void Rotate();
        void UndoRotation();


    private:
        int cellSize;
        int rotationState;
        std::vector<Color> colors;
        int rowOffset;
        int columnOffset;
};  