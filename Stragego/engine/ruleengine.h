#ifndef RULEENGINE_H
#define RULEENGINE_H

#include "structs/piece.h"

namespace rock3r {

class RuleEngine
{
public:
    RuleEngine();

    /**
     * @brief figth.
     * This method have the figthing game rules.
     * @param attacker
     * @param defender
     * @return
     */
    Piece figth(Piece &attacker, Piece &defender);

    /**
     * @brief isGameOver. Determines if the game is finished
     * @param defender
     * @return
     */
    bool isGameOver(Piece &defender);
};

}

#endif // RULEENGINE_H
