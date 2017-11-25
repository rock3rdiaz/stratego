#include "ruleengine.h"

namespace rock3r {

RuleEngine::RuleEngine()
{

}

Piece RuleEngine::figth(Piece &attacker, Piece &defender) {
    if(defender.range == Ranges::BOMB) {
        if(attacker.range == Ranges::MINER)
            return attacker;
        else
            return defender;
    } else if(attacker.range == Ranges::SPY) {
        if(defender.range == Ranges::MARSHAL)
            return attacker;
        else
            return defender;
    } else if(attacker.range <= defender.range)
            return attacker;
        else
            return defender;
}

bool RuleEngine::isGameOver(Piece &defender) {
    if(defender.range == Ranges::FLAG)
        return true;
    return false;
}

}


