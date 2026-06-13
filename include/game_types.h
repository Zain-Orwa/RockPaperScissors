// ╔════════════════════════════════════════════════════════════╗
// ║  File     : game_types.h
// ║  Author   : Zain Orwa
// ║  Created  : 2026-06-13
// ║  Modified : 2026-06-13
// ║  Brief    : 
// ╚════════════════════════════════════════════════════════════╝

#ifndef GAME_TYPES_H
#define GAME_TYPES_H

#include <string>

// ─────────────────────────────────────────────
//  enGameChoice
//  The three possible moves a player can make.
// ─────────────────────────────────────────────
enum enGameChoice
{
    Stone    = 1,
    Paper    = 2,
    Scissors = 3
};

// ─────────────────────────────────────────────
//  enWinner
//  Who won a round or the overall game.
// ─────────────────────────────────────────────
enum enWinner
{
    Player1  = 1,
    Computer = 2,
    Draw     = 3
};

// ─────────────────────────────────────────────
//  stRoundInfo
//  Snapshot of one round: choices and result.
// ─────────────────────────────────────────────
struct stRoundInfo
{
    short        RoundNumber     = 0;
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    enWinner     Winner;
    std::string  WinnerName;
};

// ─────────────────────────────────────────────
//  stGameResults
//  Accumulated results after all rounds finish.
// ─────────────────────────────────────────────
struct stGameResults
{
    short       GameRounds       = 0;
    short       Player1WinTimes  = 0;
    short       ComputerWinTimes = 0;
    short       DrawTimes        = 0;
    enWinner    GameWinner;
    std::string WinnerName       = "";
};

#endif // GAME_TYPES_H