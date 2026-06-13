// ╔════════════════════════════════════════════════════════════╗
// ║  File     : player.cpp
// ║  Author   : Zain Orwa
// ║  Created  : 2026-06-14
// ║  Modified : 2026-06-14
// ║  Brief    : 
// ╚════════════════════════════════════════════════════════════╝

#include <iostream>
#include "player.h"

// ─────────────────────────────────────────────────────────────────
//  player.cpp
//
//  Implements human player input.
//  Keeps asking until a valid choice is entered.
//  Knows nothing about the computer, display, or game flow.
// ─────────────────────────────────────────────────────────────────

enGameChoice ReadPlayerChoice()
{
    short Choice = 0;

    do
    {
        std::cout << "\nYour choice: [1] Stone  [2] Paper  [3] Scissors ? ";
        std::cin  >> Choice;

    } while (Choice < 1 || Choice > 3);

    return (enGameChoice)Choice;
}