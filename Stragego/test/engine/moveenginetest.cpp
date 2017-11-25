#include <iostream>
#include "gmock/gmock.h"
#include "engine/moveengine.h"
#include "structs/piece.h"

namespace rock3r {

TEST(MoveRule, generalMovement)
{
    MoveEngine *e = new MoveEngine();
    Piece piece = Piece(Ranges::MINER, "miner", "");
    unsigned short startPosition = 11;
    unsigned short endPosition = 21;
    EXPECT_THAT(e->move(piece, startPosition, endPosition), testing::Eq(true));
}

TEST(MoveRule, scoutMovementException)
{
    MoveEngine *e = new MoveEngine();
    Piece piece = Piece(Ranges::SCOUT, "scout", "");
    unsigned short startPosition = 11;
    unsigned short endPosition = 81;
    EXPECT_THAT(e->move(piece, startPosition, endPosition), testing::Eq(true));
}

TEST(MoveRule, generalMovementError)
{
    MoveEngine *e = new MoveEngine();
    Piece piece = Piece(Ranges::SPY, "spy", "");
    unsigned short startPosition = 11;
    unsigned short endPosition = 02;
    EXPECT_THAT(e->move(piece, startPosition, endPosition), testing::Eq(false));
}

TEST(MoveRule, bombMovementError)
{
    MoveEngine *e = new MoveEngine();
    Piece piece = Piece(Ranges::BOMB, "bomb", "");
    unsigned short startPosition = 11;
    unsigned short endPosition = 12;
    EXPECT_THAT(e->move(piece, startPosition, endPosition), testing::Eq(false));
}

TEST(MoveRule, flagMovementError)
{
    MoveEngine *e = new MoveEngine();
    Piece piece = Piece(Ranges::FLAG, "flag", "");
    unsigned short startPosition = 11;
    unsigned short endPosition = 12;
    EXPECT_THAT(e->move(piece, startPosition, endPosition), testing::Eq(false));
}

}
