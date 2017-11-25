#ifndef LOADERENGINE_H
#define LOADERENGINE_H

#include <iostream>
#include "structs/piece.h"
#include "models/team.h"
#include <map>

namespace rock3r {

class LoaderEngine
{
public:

    // amount constants
    const short marshalAmount = 1;
    const short generalAmount = 1;
    const short colonelAmount = 2;
    const short majorAmount = 3;
    const short captainAmount = 4;
    const short lieutenantAmount = 4;
    const short sergeantAmount= 4;
    const short minerAmount = 5;
    const short scoutAmount = 8;
    const short bombAmount = 6;
    const short flagAmount = 1;
    const short spyAmount = 1;

    LoaderEngine();
    void init();
    void makeTeam(std::string color, std::string nickname);
private:
    /**
     * @brief buildArmy
     * build a army from pieces
     * @return
     */
    std::map<Piece, short> buildArmy();
};

}

#endif // LOADERENGINE_H
