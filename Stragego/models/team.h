#ifndef TEAM_H
#define TEAM_H

#include "structs/piece.h"
#include <iostream>
#include <map>

namespace rock3r {

class Team
{
public:
    Team(std::string c, std::string n, std::map<Piece, short> a) : color(c),
        nickname(n), army(a) {}

    inline std::string getColor() { return color; }
    inline std::string getNickname() { return nickname; }

private:
    std::string color;
    std::string nickname;
    std::map<Piece, short> army;// <piece range, count>
};

}

#endif // TEAM_H
