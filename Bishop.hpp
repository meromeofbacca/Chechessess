#pragma once
#include "Piece.hpp"
#include "Magics.cpp"

class Bishop : public Piece
{
private:

public:
    Bishop(Square position_);
    virtual ~Bishop();
    virtual U64 GetAttacks(U64 occupancy_) const;// pure virtual
};

