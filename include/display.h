// ╔════════════════════════════════════════════════════════════╗
// ║  File     : display.h
// ║  Author   : Zain Orwa
// ║  Created  : 2026-06-14
// ║  Modified : 2026-06-14
// ║  Brief    : 
// ╚════════════════════════════════════════════════════════════╝

#ifndef DISPLAY_H
#define DISPLAY_H

#include "game_types.h"

// ─────────────────────────────────────────────────────────────────
//  display.h
//
//  Everything related to output and presentation.
//  Converts game data into human-readable text.
//  No logic, no input, no randomness — only display.
//
//  Depends on : game_types.h
//  Used by    : session.h
//
//  Future     : this is the file that becomes a ui_adapter.
//               swap terminal output for Discord embeds,
//               Telegram messages, or a web response —
//               without touching any other file.
// ─────────────────────────────────────────────────────────────────

// Convert enGameChoice to a readable string.
// Stone -> "Stone", Paper -> "Paper", Scissors -> "Scissors"
std::string ChoiceName(enGameChoice Choice);

// Convert enWinner to a readable string.
// Player1 -> "Player1", Computer -> "Computer", Draw -> "No Winner (Draw)"
std::string WinnerName(enWinner Winner);

// Print the result of a single round to the terminal.
void PrintRoundResults(stRoundInfo RoundInfo);

// Print the final game summary after all rounds finish.
void PrintGameResults(stGameResults GameResults);

#endif // DISPLAY_H