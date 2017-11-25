#ifndef MOVEENGINE_H
#define MOVEENGINE_H

#include <cmath>
#include "structs/piece.h"

namespace rock3r {

class MoveEngine
{
public:
    MoveEngine();

    /**
     * @brief Movement rules apply to all pieces.
     * @param piece
     * @param startPosition
     * @param endPosition
     * @return
     */
    bool move(Piece &piece, unsigned short &startPosition, unsigned short &endPosition);
};

}

#endif // MOVEENGINE_H
