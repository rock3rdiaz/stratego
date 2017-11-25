#include "loaderengine.h"

namespace rock3r {

LoaderEngine::LoaderEngine()
{
    std::cout << "loader started ..." << std::endl;
}

void LoaderEngine::init() {
    // TODO
}

void LoaderEngine::makeTeam(std::string color, std::string nickname) {
    std::map<Piece, short> army = buildArmy();
    Team *t1 = new Team(color, nickname, army);
}

std::map<Piece, short> LoaderEngine::buildArmy() {
    std::map<Piece, short> army;

    Piece marshal = Piece(1, "marshal", "");
    Piece general = Piece(2, "general", "");
    Piece colonel = Piece(3, "colonel", "");
    Piece major = Piece(4, "major", "");
    Piece captain = Piece(5, "captain", "");
    Piece lieutenant = Piece(6, "lieutenant", "");
    Piece sergeant = Piece(7, "sergeant", "");
    Piece miner = Piece(8, "miner", "Can defuse bombs");
    Piece scout = Piece(9, "scout", "Can move any distance in a straight line, without leaping over pieces / lakes");
    Piece spy = Piece(0, "spy", "Can be captured by the Spy");
    Piece bomb = Piece(10, "bomb", "Immovable; defeats any attacking piece except Miner");// 'B'
    Piece flag = Piece(11, "flag", "Immovable; its capture ends the game");// 'F'

    army[marshal] = marshalAmount;
    army[general] = generalAmount;
    army.insert(std::make_pair(colonel, colonelAmount));
    army.insert(std::make_pair(major, majorAmount));
    army.insert(std::make_pair(captain, captainAmount));
    army.insert(std::make_pair(lieutenant, lieutenantAmount));
    army.insert(std::make_pair(sergeant, sergeantAmount));
    army.insert(std::make_pair(miner, minerAmount));
    army.insert(std::make_pair(scout, scoutAmount));
    army.insert(std::make_pair(spy, spyAmount));
    army.insert(std::make_pair(bomb, bombAmount));
    army.insert(std::make_pair(flag, flagAmount));

    return army;
}

}
