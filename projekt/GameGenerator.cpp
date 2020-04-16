
//
// Created by Maria Olsson on 2019-12-07.
// Copyright (c) 2019 Mittuniversitetet. All rights reserved.
//

#include <random>
#include <algorithm>
#include "GameGenerator.h"

std::set<std::pair<size_t, size_t>> GameGenerator::randomizeMinePositions(size_t rows, size_t columns, size_t mineCount) {
    while (minePositions.size() < mineCount) {
        std::random_device dev;
        std::mt19937 generator(dev());
        std::uniform_int_distribution<size_t> xRnd(0, columns - 1);
        std::uniform_int_distribution<size_t> yRnd(0, rows - 1);

        size_t xCoord = xRnd(generator);
        size_t yCoord = yRnd(generator);
        minePositions.insert(std::make_pair(xCoord, yCoord));
    }
    return  minePositions;
}

std::set<std::pair<size_t, size_t>> GameGenerator::getMinePositions() const {
    return minePositions;
}
