// ╔════════════════════════════════════════════════════════════╗
// ║  File     : computer.cpp
// ║  Author   : Zain Orwa
// ║  Created  : 2026-06-14
// ║  Modified : 2026-06-14
// ║  Brief    : 
// ╚════════════════════════════════════════════════════════════╝

#include <cstdlib>
#include "computer.h"

// ─────────────────────────────────────────────────────────────────
//  computer.cpp
//
//  Implements randomness and the computer's choice generation.
//  Knows nothing about the player, display, or game flow.
//
//  Note: srand() is NOT called here.
//  Seeding is a one-time setup responsibility that belongs
//  in main.cpp — the entry point of the program.
//  Calling srand() here would risk re-seeding mid-game,
//  which resets the random sequence and breaks randomness.
// ─────────────────────────────────────────────────────────────────

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

enGameChoice GetComputerChoice()
{
    return (enGameChoice)RandomNumber(1, 3);
}