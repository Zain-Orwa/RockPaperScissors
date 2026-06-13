// ╔════════════════════════════════════════════════════════════╗
// ║  File     : session.h
// ║  Author   : Zain Orwa
// ║  Created  : 2026-06-14
// ║  Modified : 2026-06-14
// ║  Brief    : 
// ╚════════════════════════════════════════════════════════════╝

#ifndef SESSION_H
#define SESSION_H

#include "game_types.h"
#include "game_logic.h"
#include "player.h"
#include "computer.h"
#include "display.h"

// ─────────────────────────────────────────────────────────────────
//  session.h
//
//  The outermost game flow. Owns the full player experience
//  from start to finish — rounds, games, and the play-again loop.
//
//  This is the only header that includes all other headers.
//  main.cpp only needs to include this one file.
//
//  Depends on : game_types.h, game_logic.h, player.h,
//               computer.h, display.h
//  Used by    : main.cpp
//
//  Future     : when multiplayer arrives, PlayGame() receives
//               a player list instead of assuming one human.
//               StartSession() replaces StartGame() and manages
//               connected players, not just a terminal loop.
// ─────────────────────────────────────────────────────────────────

// Run one full game of HowManyRounds rounds.
// Collects choices, calculates results, displays each round.
// Returns the complete game results when all rounds are done.
stGameResults PlayGame(short HowManyRounds);

// Run the full player experience.
// Starts a game, shows the result, asks to play again.
// Loops until the player chooses to quit.
void StartGame();

#endif // SESSION_H