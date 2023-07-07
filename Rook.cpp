#include "Rook.hpp"

Rook::Rook(Square position_):
Piece(position_)
{
    init_sliders_attacks(rook);
}

Rook::~Rook()
{
    
}

U64 Rook::GetAttacks(U64 occupancy_) const
{
    return get_rook_attacks(GetPosition(), occupancy_);
}