// ╔════════════════════════════════════════════════════════════╗
// ║  File     : display.cpp
// ║  Author   : Zain Orwa
// ║  Created  : 2026-06-14
// ║  Modified : 2026-06-14
// ║  Brief    : 
// ╚════════════════════════════════════════════════════════════╝

#include <iostream>
#include "display.h"

// ─────────────────────────────────────────────────────────────────
//  display.cpp
//
//  Implements all terminal output for the game.
//  Converts enums and structs into readable text.
//  No logic, no input, no randomness — only display.
//
//  This is the only file in the project that uses cout.
//  In the future this becomes the ui_adapter — swap
//  cout for Discord embeds or Telegram messages here,
//  and nothing else in the project needs to change.
// ─────────────────────────────────────────────────────────────────

std::string ChoiceName(enGameChoice Choice)
{
    switch (Choice)
    {
        case Stone:    return "Stone";
        case Paper:    return "Paper";
        case Scissors: return "Scissors";
    }
    return "Unknown";
}

std::string WinnerName(enWinner Winner)
{
    switch (Winner)
    {
        case Player1:  return "Player1";
        case Computer: return "Computer";
        case Draw:     return "No Winner (Draw)";
    }
    return "Unknown";
}

void PrintRoundResults(stRoundInfo RoundInfo)
{
    std::cout << "\n─────────────────────────────────────\n";
    std::cout << " Round [" << RoundInfo.RoundNumber << "]\n";
    std::cout << "─────────────────────────────────────\n";
    std::cout << " Player1  : " << ChoiceName(RoundInfo.Player1Choice)  << "\n";
    std::cout << " Computer : " << ChoiceName(RoundInfo.ComputerChoice) << "\n";
    std::cout << " Winner   : " << RoundInfo.WinnerName                 << "\n";
    std::cout << "─────────────────────────────────────\n";
}

void PrintGameResults(stGameResults GameResults)
{
    std::cout << "\n═════════════════════════════════════\n";
    std::cout << " Game Over\n";
    std::cout << "═════════════════════════════════════\n";
    std::cout << " Rounds played : " << GameResults.GameRounds       << "\n";
    std::cout << " Player1 wins  : " << GameResults.Player1WinTimes  << "\n";
    std::cout << " Computer wins : " << GameResults.ComputerWinTimes << "\n";
    std::cout << " Draws         : " << GameResults.DrawTimes        << "\n";
    std::cout << "─────────────────────────────────────\n";
    std::cout << " Winner        : " << GameResults.WinnerName       << "\n";
    std::cout << "═════════════════════════════════════\n";
}