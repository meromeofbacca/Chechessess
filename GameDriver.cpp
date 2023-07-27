#include "ChessGame.cpp"

int main()
{
    U64 occ = 0ULL;
    std::vector<U64> v = { occ };
    ChessGame cg;
    //move king to middle of board
    // cg.Move(d2, e5);
    //move piece to checking position
    
    //b6, d6, f6, a4, f4
    Square q = f5;
    cg.Move(e1, d4);
    cg.Move(d8, q);
    cg.PrintBoard();
    // PrintGoard(cg.GetAttacks(d4));
    cg.FilterCheck( cg.GetAttacks(q), white);
    PrintGoard( GetRay(d4,d8) );
}
