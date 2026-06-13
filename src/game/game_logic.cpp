// ╔════════════════════════════════════════════════════════════╗
// ║  File     : game_logic.cpp
// ║  Author   : Zain Orwa
// ║  Created  : 2026-06-14
// ║  Modified : 2026-06-14
// ║  Brief    : 
// ╚════════════════════════════════════════════════════════════╝

#include "game_logic.h"

// ─────────────────────────────────────────────────────────────────
//  game_logic.cpp
//
//  Implements the two pure game rules.
//  No input, no output, no randomness, no global state.
//  Given data in → correct answer out. Nothing else.
// ─────────────────────────────────────────────────────────────────

enWinner WhoWonTheRound(stRoundInfo RoundInfo)
{
    if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
        return Draw;

    switch (RoundInfo.Player1Choice)
    {
        case Stone:
            return (RoundInfo.ComputerChoice == Paper) ? Computer : Player1;

        case Paper:
            return (RoundInfo.ComputerChoice == Scissors) ? Computer : Player1;

        case Scissors:
            return (RoundInfo.ComputerChoice == Stone) ? Computer : Player1;
    }

    // Should never reach here — all enum cases are covered above.
    // Returning Draw as a safe fallback to satisfy the compiler.
    return Draw;
}

enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes)
{
    if (Player1WinTimes > ComputerWinTimes) return Player1;
    if (ComputerWinTimes > Player1WinTimes) return Computer;
    return Draw;
}