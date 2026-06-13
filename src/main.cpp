// ╔════════════════════════════════════════════════════════════╗
// ║  File     : main.cpp
// ║  Author   : Zain Orwa
// ║  Created  : 2026-06-14
// ║  Modified : 2026-06-14
// ║  Brief    : 
// ╚════════════════════════════════════════════════════════════╝

#include <cstdlib>
#include <ctime>
#include "session.h"

// ─────────────────────────────────────────────────────────────────
//  main.cpp
//
//  Entry point. Does exactly three things:
//  1. Seed the random number generator once.
//  2. Start the game.
//  3. Return 0 to the OS on clean exit.
//
//  Nothing else belongs here.
//  All logic lives in the modules it delegates to.
// ─────────────────────────────────────────────────────────────────

int main()
{
    srand((unsigned)time(NULL));
    StartGame();
    return 0;
}