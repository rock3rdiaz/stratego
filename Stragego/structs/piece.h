#ifndef PIECE_H
#define PIECE_H

#include <iostream>

namespace rock3r {

/**
 * @brief The Ranges enum
 */
enum Ranges {
    MARSHAL = 1,
    GENERAL = 2,
    COLONEL = 3,
    MAJOR = 4,
    CAPTAIN = 5,
    LIEUTENANT = 6,
    SERGENANT = 7,
    MINER = 8,
    SCOUT = 9,
    SPY = 10,
    BOMB = 11,
    FLAG = 12,
};

/**
 * @brief The Piece struct.
 * A stratego struct
 */

struct Piece {
    short int range;
    std::string name;
    std::string description;

    Piece(short r, std::string n, std::string d) :
        range(r), name(n), description(d) {}

    Piece() {}
};

}

#endif // PIECE_H
