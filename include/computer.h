// ╔════════════════════════════════════════════════════════════╗
// ║  File     : computer.h
// ║  Author   : Zain Orwa
// ║  Created  : 2026-06-14
// ║  Modified : 2026-06-14
// ║  Brief    : 
// ╚════════════════════════════════════════════════════════════╝

#ifndef COMPUTER_H
#define COMPUTER_H

#include "game_types.h"

// ─────────────────────────────────────────────────────────────────
//  computer.h
//
//  Everything related to the computer opponent's move.
//  Handles randomness and choice generation.
//
//  Depends on : game_types.h
//  Used by    : session.h
// ─────────────────────────────────────────────────────────────────

// Generate a random integer between From and To (inclusive).
// Foundation for all randomness in the computer's behavior.
int RandomNumber(int From, int To);

// Randomly pick Stone, Paper, or Scissors.
// Returns the computer's choice as enGameChoice.
enGameChoice GetComputerChoice();

#endif // COMPUTER_H