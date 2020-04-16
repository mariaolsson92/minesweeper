
//
// Created by Maria Olsson on 2019-12-07.
// Copyright (c) 2019 Mittuniversitetet. All rights reserved.
//

#ifndef PROJEKT_GAMEGENERATOR_H
#define PROJEKT_GAMEGENERATOR_H

#include <cstdlib>
#include <vector>
#include <set>

/**
 * Generates and owns mine positions.
 */
class GameGenerator {
public:
    std::set<std::pair<size_t, size_t>> getMinePositions() const;

    /** @brief
     * Randomizes the x and y coordinates of all mines on the game board and stores them in pairs in a set
     */
    std::set<std::pair<size_t, size_t>> randomizeMinePositions(size_t rows, size_t columns, size_t mineCount);

private:
    std::set<std::pair<size_t, size_t>> minePositions;
};


#endif //PROJEKT_GAMEGENERATOR_H
