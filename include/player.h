// ╔════════════════════════════════════════════════════════════╗
// ║  File     : player.h
// ║  Author   : Zain Orwa
// ║  Created  : 2026-06-14
// ║  Modified : 2026-06-14
// ║  Brief    : 
// ╚════════════════════════════════════════════════════════════╝

#ifndef PLAYER_H
#define PLAYER_H

#include "game_types.h"

// ─────────────────────────────────────────────────────────────────
//  player.h
//
//  Everything related to a human player's input.
//  Reads, validates, and returns the player's choice.
//
//  Depends on : game_types.h
//  Used by    : session.h
// ─────────────────────────────────────────────────────────────────

// Prompt the player to pick Stone, Paper, or Scissors.
// Keeps asking until a valid choice (1-3) is entered.
// Returns the validated choice as enGameChoice.
enGameChoice ReadPlayerChoice();

#endif // PLAYER_H