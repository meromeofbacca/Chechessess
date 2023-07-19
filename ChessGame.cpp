#include "ChessGame.hpp"

ChessGame::ChessGame(/* args */)
{
    // { Pawn, Knight, Bishop, Rook, Queen, King }
    WhitePiecesArray = 
    { 
        0x000000000000FF00ULL, 
        0x0000000000000042ULL, 
        0x0000000000000024ULL, 
        0x0000000000000081ULL, 
        0x0000000000000008ULL, 
        0x0000000000000010ULL 
    };
    
    BlackPiecesArray = 
    {
        0x00FF000000000000ULL,
        0x4200000000000000ULL,
        0x2400000000000000ULL,
        0x8100000000000000ULL,
        0x0800000000000000ULL,
        0x1000000000000000ULL
    };
    InitMagics();
    UpdateBoard();
}

void ChessGame::InitMagics() const
{
    init_sliders_attacks(0);
    init_sliders_attacks(1);
}

// Masking functions
bool ChessGame::PawnMask(const U64& otherBoard, Color color) const
{
    //white
    if(color)
        return otherBoard & WhitePiecesArray.at(Pawn);
    //black
    return otherBoard & BlackPiecesArray.at(Pawn);
}

bool ChessGame::KnightMask(const U64& otherBoard, Color color) const
{ 
    //white
    if(color)
        return otherBoard & WhitePiecesArray.at(Knight);
    //black
    return otherBoard & BlackPiecesArray.at(Knight);
}

bool ChessGame::BishopMask(const U64& otherBoard, Color color) const
{
    //white
    if(color)
        return otherBoard & WhitePiecesArray.at(Bishop);
    //black
    return otherBoard & BlackPiecesArray.at(Bishop);
}

bool ChessGame::RookMask(const U64& otherBoard, Color color) const
{
    //white
    if(color)
        return otherBoard & WhitePiecesArray.at(Rook);
    //black
    return otherBoard & BlackPiecesArray.at(Rook);
}

bool ChessGame::QueenMask(const U64& otherBoard, Color color) const
{
    //white
    if(color)
        return otherBoard & WhitePiecesArray.at(Queen);
    //black
    return otherBoard & BlackPiecesArray.at(Queen);
}

bool ChessGame::KingMask(const U64& otherBoard, Color color) const
{
    //white
    if(color)
        return otherBoard & WhitePiecesArray.at(King);
    //black
    return otherBoard & BlackPiecesArray.at(King);
}

/* ATTACK FUNCTIONS */
U64 ChessGame::GetPawnAttacks(U64 pawn, const U64 occupancy_) const
{
    U64 attacks = 0ULL;

    //white-side moves
    if( GetColor(pawn) == white )
    {
        attacks = ( North(pawn) | NorthWest(pawn) | NorthEast(pawn) );

        // Initial 2 square move
        if( pawn & RANK_2 )
            attacks |= pawn << 16;
    }

    //black-side moves
    if ( GetColor(pawn) == black)
    {
        attacks = ( South(pawn) | SouthWest(pawn) | SouthEast(pawn) );

        // Initial 2 square move
        if( pawn & RANK_7 )
            attacks |= pawn >> 16;
    }
    
    return attacks;
}

U64 ChessGame::GetKnightAttacks(U64 knight, const U64 occupancy_) const
{
    U64 attacks = 0ULL;
    attacks = ( 
                ((knight & (FILE_G | FILE_H)) ? 0ULL : (knight >> 6) | (knight << 10)) | 
                (( knight & (FILE_A | FILE_B)) ? 0ULL : (knight >> 10) | (knight << 6)) |
                (( knight & FILE_H) ? 0ULL : (knight >> 15 | knight << 17)) |
                (( knight & FILE_A) ? 0ULL : (knight >> 17 | knight << 15)) 
                );

    return attacks;   //Queried with U64 attacks = Knightattacks[from] & targets;
}

U64 ChessGame::GetBishopAttacks(U64 bishop, const U64 occupancy_) const
{
    return get_bishop_attacks(bishop, occupancy_);
}

U64 ChessGame::GetRookAttacks(U64 rook, const U64 occupancy_) const
{
    return get_rook_attacks(rook, occupancy_);
}

U64 ChessGame::GetQueenAttacks(U64 queen, const U64 occupancy_) const
{
    return get_bishop_attacks(queen, occupancy_) | get_rook_attacks(queen, occupancy_);
}

U64 ChessGame::GetKingAttacks(U64 king, const U64 occupancy_) const
{
    U64 attacks = 0ULL;
    attacks = ( 
                North(king) | NorthEast(king) | NorthWest(king) | 
                South(king) | SouthEast(king) | SouthWest(king) |
                East(king) | West(king)   
                );

    return attacks;
}

U64 ChessGame::GetAttacks(Square square_, const U64 occupancy_) const
{
    U64 attacks, piece = 0ULL;
    set_bit(piece, square_);

    std::vector<U64> PieceType;
    for( size_t i = 0; i < WhitePiecesArray.size(); i++)
        PieceType.push_back( WhitePiecesArray.at(i) | BlackPiecesArray.at(i) );

    int which_function;
    for( size_t i = 0; i < PieceType.size(); i++)
    {
        if( piece & PieceType.at(i) )
            which_function = i;
    }

    switch (which_function)
    {
    case 0:
        attacks = GetPawnAttacks(piece, board);
        break;
    case 1:
        attacks = GetKnightAttacks(piece, board);
        break;
    case 2:
        attacks = GetBishopAttacks(piece, board);
        break;
    case 3:
        attacks = GetRookAttacks(piece, board);
        break;
    case 4:
        attacks = GetQueenAttacks(piece, board);
        break;
    case 5:
        attacks = GetKingAttacks(piece, board);
        break;
    default:
        break;
    }

    return attacks;
}

void ChessGame::UpdateBoard()
{
    WhitePieces = WhitePiecesArray.at(Pawn) | WhitePiecesArray.at(Knight) | WhitePiecesArray.at(Bishop) | 
                  WhitePiecesArray.at(Rook) | WhitePiecesArray.at(Queen) | WhitePiecesArray.at(King);
    BlackPieces = BlackPiecesArray.at(Pawn) | BlackPiecesArray.at(Knight) | BlackPiecesArray.at(Bishop) | 
                  BlackPiecesArray.at(Rook) | BlackPiecesArray.at(Queen) | BlackPiecesArray.at(King);
    board = WhitePieces | BlackPieces;
}

// Utility functions
Color ChessGame::GetColor(U64 piece) const 
{
    if( (piece & WhitePieces) && (piece & BlackPieces) )
        throw std::invalid_argument("Inputted board, not piece.");

    if( piece & WhitePieces )
        return white;
    return black;
}

void ChessGame::PrintBoard() const
{
    std::string boardString;
    U64 square;
    for( int i = 63; i >= 0; i-- ) 
    {
        square = get_bit(board, i);
        if( square )
        {
            if( PawnMask(square, white)   | PawnMask(square, black) )
                boardString += "P ";
            if( KnightMask(square, white) | KnightMask(square, black) )
                boardString += "N ";
            if( BishopMask(square, white) | BishopMask(square, black) )
                boardString += "B ";
            if( RookMask(square, white)   | RookMask(square, black) )
                boardString += "R ";
            if( QueenMask(square, white)  | QueenMask(square, black) )
                boardString += "Q ";
            if( KingMask(square, white)   | KingMask(square, black) )
                boardString += "K ";
        }
        else
            boardString += "0 ";

        // new line + reverse
        if( (i % 8) == 0 )
        {
            boardString += " " + std::to_string(i/8 + 1);
            std::reverse(boardString.begin(), boardString.end());
            std::cout << boardString << std::endl;
            boardString.clear();
        }
    }
    std::cout << "   a b c d e f g h\n" << std::endl;   
}

void PrintBoard(U64 board)
{
    std::string boardString;
    U64 square;
    for( int i = 63; i >= 0; i-- ) 
    {
        square = get_bit(board, i);
        if( square )
            boardString += "1 ";
        else
            boardString += "0 ";

        // new line + reverse
        if( (i % 8) == 0 )
        {
            boardString += " " + std::to_string(i/8 + 1);
            std::reverse(boardString.begin(), boardString.end());
            std::cout << boardString << std::endl;
            boardString.clear();
        }
    }
    std::cout << "   a b c d e f g h\n" << std::endl;   
}
