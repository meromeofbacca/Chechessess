#pragma once
#include "AbilityLibrary.fwd.hpp"
#include "SuperChessGame.fwd.hpp"
#include "Ability.hpp"
#include "SuperPiece.hpp"
class SuperChessGame : public ChessGame
{
private:
    // ability related data members
    std::shared_ptr<AbilityLibrary> al;
    std::unordered_map<Square, std::shared_ptr<SuperPiece>> super_pieces;
    std::unordered_map<std::pair<Color, SuperPieceInfo>, int, PairInsidePairEnumHash> graveyard;
    //init
    void InitSuperPieces(const SuperPieceInfo &white, const SuperPieceInfo &black);
public:
    SuperChessGame();
    SuperChessGame(const SuperPieceInfo &white_info, const SuperPieceInfo &black_info);
    ~SuperChessGame() = default;

    bool RemovePiece(Square square) override;
    bool AddSuperPiece(SuperPieceInfo info, Square square, Color color, bool conversion = 0);
    bool ConvertPieceToSide(Square square, Color side);
    bool ConvertToSuperPiece(SuperPieceInfo info, Square square);
    bool ConvertSuperPiecesofType(SuperPieceInfo info, Color color);
    bool UpgradeSuperPieceTier(Square square, Tier to_tier);

    //utility
    U64& GetBoardOf(Piece piece, Color color);
    bool IsSuperPiece(const Square &key) const;
    bool InCheck(Color color) const;
    void CapTier(Tier& t, Piece p_type) const;
    void MakeAbilityVector(std::vector<std::unique_ptr<Ability>>& v, SuperPieceInfo info);
    void Swap(Square from, Square to);
    void SwapSuperPieces(Square from, Square to);

    //graveyard functions
    void AddToGraveyard(Color color, Square sq, Piece piece);
    void RemoveFromGraveYard(const std::pair<Color, SuperPieceInfo>& key);
    bool PieceInGraveyard(Color color, Piece piece);
    std::vector<SuperPieceInfo> GetPiecesInGraveyard(Color color) const;

    // Move functions
    U64 GetAttacks(Square square_) const override;
    std::vector<Action> Move(Square from_sq, Square to_sq) override;
    void ExecuteMove(Color color, Square from_sq, Square to_sq, Piece from_piece, Piece to_piece) override;

    //misc
    bool UseAbility(Square sq, Tier t);

    //to be removed
    int GetNumAbilities(Square sq);
    void PrintAbilityNames(Square sq);
};