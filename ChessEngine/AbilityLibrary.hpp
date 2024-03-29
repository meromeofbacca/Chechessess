#pragma once

#include "SuperChessGame.fwd.hpp"
#include "Ability.hpp"

#include "PawnTwoTiles.cpp"
#include "PawnConvert.cpp"
#include "PawnConvertSuper.cpp"
#include "PawnTwoTilesBackwards.cpp"
#include "KingInspire.cpp"
#include "KingTurnIntoDead.cpp"
#include "KingSniperShot.cpp"
#include "KingTeleport.cpp"
#include "KingConvert.cpp"
#include "BishopSwap.cpp"
#include "BishopTakeCover.cpp"
#include "BishopResurrect.cpp"
#include "KnightBigL.cpp"
#include "KnightProtection.cpp"
#include "RookSwap.cpp"
#include "RookRamBuff.cpp"
#include "QueenInspire.cpp"
#include "QueenKamikaze.cpp"
#include "Definitions.hpp"

//TO BE REPLACED
#include "KnightTier2.hpp"
#include "RookTier2.hpp"

class AbilityLibrary{
private:
    std::unordered_map<SuperPieceInfo, std::unique_ptr<Ability>, PairEnumHash> lib;
    const std::vector<Tier> MAX_TIERS = {Tier::T3, Tier::T2, Tier::T2, Tier::T2, Tier::T1, Tier::T4};
public:
    AbilityLibrary(SuperChessGame& game_, Logger& log_);
    ~AbilityLibrary() = default;
    std::unique_ptr<Ability> GetAbility(const SuperPieceInfo& key);
    Tier GetMaxTier(const Piece p_type) const;
};