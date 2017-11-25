#include <iostream>
#include "gmock/gmock.h"
#include "structs/piece.h"
#include "engine/ruleengine.h"

namespace rock3r {

TEST(EngineRule, bombException)
{
    RuleEngine *e = new RuleEngine();
    Piece attacker = Piece(Ranges::MINER, "miner", "");
    Piece defender = Piece(Ranges::BOMB, "bomb","");

    EXPECT_THAT(e->figth(attacker, defender).range,
                testing::Eq(attacker.range));
}

TEST(EngineRule, bombErrorException)
{
    RuleEngine *e = new RuleEngine();
    Piece attacker = Piece(Ranges::MARSHAL, "marshal", "");
    Piece defender = Piece(Ranges::BOMB, "bomb","");

    EXPECT_THAT(e->figth(attacker, defender).range,
                testing::Not(attacker.range));
}

TEST(EngineRule, spyException)
{
    RuleEngine *e = new RuleEngine();
    Piece attacker = Piece(Ranges::SPY, "spy", "");
    Piece defender = Piece(Ranges::MARSHAL, "marshal","");

    EXPECT_THAT(e->figth(attacker, defender).range,
                testing::Eq(attacker.range));
}

TEST(EngineRule, spyErrorException)
{
    RuleEngine *e = new RuleEngine();
    Piece attacker = Piece(Ranges::SPY, "spy", "");
    Piece defender = Piece(Ranges::MAJOR, "major","");

    EXPECT_THAT(e->figth(attacker, defender).range,
                testing::Not(attacker.range));
}

TEST(EngineRule, generalException)
{
    RuleEngine *e = new RuleEngine();
    Piece attacker = Piece(Ranges::MAJOR, "major", "");
    Piece defender = Piece(Ranges::SCOUT, "scout","");

    EXPECT_THAT(e->figth(attacker, defender).range,
                testing::Eq(attacker.range));
}

TEST(EngineRule, generalErrorException)
{
    RuleEngine *e = new RuleEngine();
    Piece attacker = Piece(Ranges::LIEUTENANT, "lieutenant", "");
    Piece defender = Piece(Ranges::MAJOR, "major","");

    EXPECT_THAT(e->figth(attacker, defender).range,
                testing::Not(attacker.range));
}

TEST(EngineRule, isGameOver)
{
    RuleEngine *e = new RuleEngine();
    Piece defender = Piece(Ranges::FLAG, "flag", "");

    EXPECT_THAT(e->isGameOver(defender), testing::Eq(true));
}

TEST(EngineRule, isGameOverError)
{
    RuleEngine *e = new RuleEngine();
    Piece defender = Piece(Ranges::MARSHAL, "marshal", "");

    EXPECT_THAT(e->isGameOver(defender), testing::Eq(false));
}
}

