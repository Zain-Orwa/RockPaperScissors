// ╔════════════════════════════════════════════════════════════╗
// ║  File     : game_logic.h
// ║  Author   : Zain Orwa
// ║  Created  : 2026-06-14
// ║  Modified : 2026-06-14
// ║  Brief    : 
// ╚════════════════════════════════════════════════════════════╝


#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H

#include "game_types.h"

// ─────────────────────────────────────────────────────────────────
//  game_logic.h
//
//  Pure game rules. No input, no output, no randomness.
//  These functions only know about choices and winners.
//
//  Depends on : game_types.h
//  Used by    : session.h
// ─────────────────────────────────────────────────────────────────

// Given a round snapshot, return who won.
// Stone beats Scissors. Paper beats Stone. Scissors beats Paper.
enWinner WhoWonTheRound(stRoundInfo RoundInfo);

// Given total win counts, return the overall game winner.
enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes);

#endif // GAME_LOGIC_H