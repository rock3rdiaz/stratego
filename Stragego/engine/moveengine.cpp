#include "moveengine.h"

namespace rock3r {

MoveEngine::MoveEngine()
{

}

bool MoveEngine::move(Piece &piece, unsigned short &startPosition,
                      unsigned short &endPosition) {
    if(piece.range == Ranges::BOMB || piece.range == Ranges::FLAG) {
        return false;
    } else {
        if(piece.range == Ranges::SCOUT){
            if(std::abs(endPosition - startPosition) % 10 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            if((std::abs(endPosition - startPosition) == 1) ||
                    (std::abs(endPosition - startPosition) == 10)) {
                return true;
            }
            else {
                return false;
            }
        }
    }
}

}


