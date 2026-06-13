// ╔════════════════════════════════════════════════════════════╗
// ║  File     : session.cpp
// ║  Author   : Zain Orwa
// ║  Created  : 2026-06-14
// ║  Modified : 2026-06-14
// ║  Brief    : 
// ╚════════════════════════════════════════════════════════════╝

#include <iostream>
#include "session.h"

// ─────────────────────────────────────────────────────────────────
//  session.cpp
//
//  Implements the full player experience.
//  Connects player, computer, game logic, and display
//  into one coherent flow.
//
//  This is the only file that orchestrates other modules.
//  It does not implement rules, input, or output directly —
//  it delegates every responsibility to the right module.
//
//  Future: PlayGame() will receive a player list instead of
//  assuming one human. StartGame() becomes StartSession()
//  and manages connected players over a network.
// ─────────────────────────────────────────────────────────────────

static short ReadNumberOfRounds()
{
    short Rounds = 0;

    do
    {
        std::cout << "\nHow many rounds do you want to play? [1-10] : ";
        std::cin  >> Rounds;

    } while (Rounds < 1 || Rounds > 10);

    return Rounds;
}

stGameResults PlayGame(short HowManyRounds)
{
    stRoundInfo   RoundInfo;
    stGameResults Results;

    Results.GameRounds = HowManyRounds;

    for (short Round = 1; Round <= HowManyRounds; Round++)
    {
        RoundInfo.RoundNumber    = Round;
        RoundInfo.Player1Choice  = ReadPlayerChoice();
        RoundInfo.ComputerChoice = GetComputerChoice();
        RoundInfo.Winner         = WhoWonTheRound(RoundInfo);
        RoundInfo.WinnerName     = WinnerName(RoundInfo.Winner);

        switch (RoundInfo.Winner)
        {
            case Player1:  Results.Player1WinTimes++;  break;
            case Computer: Results.ComputerWinTimes++; break;
            case Draw:     Results.DrawTimes++;        break;
        }

        PrintRoundResults(RoundInfo);
    }

    Results.GameWinner = WhoWonTheGame(Results.Player1WinTimes,
                                       Results.ComputerWinTimes);
    Results.WinnerName = WinnerName(Results.GameWinner);

    return Results;
}

void StartGame()
{
    char PlayAgain = 'Y';

    do
    {
        short Rounds = ReadNumberOfRounds();

        stGameResults GameResults = PlayGame(Rounds);
        PrintGameResults(GameResults);

        std::cout << "\nPlay again? [Y / N] : ";
        std::cin  >> PlayAgain;

    } while (PlayAgain == 'Y' || PlayAgain == 'y');
}