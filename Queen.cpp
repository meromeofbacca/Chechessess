#include "Queen.hpp"

Queen::Queen(Square position_, Color color_) : 
Piece(position_, color_)
{
    init_sliders_attacks(bishop);
    init_sliders_attacks(rook);
}

U64 Queen::GetAttacks(U64 occupancy_) const
{
    return get_bishop_attacks(position, occupancy_) | get_rook_attacks(position, occupancy_);
}