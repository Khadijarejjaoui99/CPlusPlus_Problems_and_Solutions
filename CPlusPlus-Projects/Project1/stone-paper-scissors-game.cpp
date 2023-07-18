#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enGameChoice
{
    Stone = 1,
    Paper = 2,
    Scissors = 3
};

enum enWinner
{
    Player = 1,
    Computer = 2,
    Draw = 3
};

struct stGameResults
{
    short GameRounds = 0;
    short PlayerWonTime = 0;
    short ComputerWonTime = 0;
    short DrawTime = 0;
    enWinner FinalWinner;
    string FinalWinnerName;
};

struct stRoundInfo
{
    short RoundNumber = 0;
    enGameChoice PlayerChoice, ComputerChoice;
    enWinner RoundWinner;
    string RoundWinnerName;
};

int GetRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

int ReadHowManyRounds()
{
    int NumberOfRounds = 0;
    do
    {
        cout << "How Many Rounds 1 To 10?\n";
        cin >> NumberOfRounds;
    } while (NumberOfRounds < 1 || NumberOfRounds > 10);

    return NumberOfRounds;
}

enGameChoice ReadPlayerChoice()
{
    int Choice = 0;
    do
    {
        cout << "Your choice: [1]: Stone, [2]: Paper, [3]: Scissors? ";
        cin >> Choice;
    } while (Choice < 1 || Choice > 3);

    return (enGameChoice)Choice;
}

enGameChoice ReadComputerChoice()
{
    return (enGameChoice)GetRandomNumber(1, 3);
}

enWinner WhoIsRoundWinner(stRoundInfo RoundInfo)
{
    if (RoundInfo.PlayerChoice == RoundInfo.ComputerChoice)
        return enWinner::Draw;

    switch (RoundInfo.PlayerChoice)
    {
    case enGameChoice::Stone:
        if (RoundInfo.ComputerChoice == enGameChoice::Paper)
            return enWinner::Computer;
        break;

    case enGameChoice::Paper:
        if (RoundInfo.ComputerChoice == enGameChoice::Scissors)
            return enWinner::Computer;
        break;
    case enGameChoice::Scissors:
        if (RoundInfo.ComputerChoice == enGameChoice::Stone)
            return enWinner::Computer;
        break;
    }

    return enWinner::Player;
}

string GetWinnerName(enWinner Winner)
{
    string Winners[3] = {"Player", "Computer", "No Winner"};
    return Winners[Winner - 1];
}

string GetChoiceName(enGameChoice GameChoice)
{
    string Choices[3] = {"Stone", "Paper", "Scissors"};
    return Choices[GameChoice - 1];
}

void ChangeScreenColor(string WinnerName)
{
    if (WinnerName == "Player")
        system("color 2F");
    else if (WinnerName == "Computer")
    {
        cout << "\a";
        system("color 4F");
    }

    else
        system("color 6F");
}

enWinner WhoIsGameWinner(stGameResults GameResults)
{
    if (GameResults.PlayerWonTime > GameResults.ComputerWonTime)
        return enWinner::Player;
    else if (GameResults.PlayerWonTime < GameResults.ComputerWonTime)
        return enWinner::Computer;
    else
        return enWinner::Draw;
}

stGameResults FillGameResults(short HowManyRounds, short PlayerWonTime, short ComputerWonTime, short DrawTime)
{
    stGameResults GameResults;

    GameResults.GameRounds = HowManyRounds;
    GameResults.PlayerWonTime = PlayerWonTime;
    GameResults.ComputerWonTime = ComputerWonTime;
    GameResults.DrawTime = DrawTime;
    GameResults.FinalWinner = WhoIsGameWinner(GameResults);
    GameResults.FinalWinnerName = GetWinnerName(GameResults.FinalWinner);

    return GameResults;
}

void PrintRoundResult(stRoundInfo RoundInfo)
{
    ChangeScreenColor(RoundInfo.RoundWinnerName);
    cout << "--------------Round [" << RoundInfo.RoundNumber << "]--------------\n";
    cout << "Player Choice: " << GetChoiceName(RoundInfo.PlayerChoice) << endl;
    cout << "Computer Choice: " << GetChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner: " << RoundInfo.RoundWinnerName << endl;
    cout << "-----------------------------------------\n";
}

stGameResults PlayRounds(short HowManyRounds)
{
    stRoundInfo RoundInfo;
    short PlayerWonTime = 0, DrawTime = 0, ComputerWonTime = 0;
    for (int RoundNumber = 1; RoundNumber <= HowManyRounds; RoundNumber++)
    {
        cout << "Round [" << RoundNumber << "] begins:\n";

        RoundInfo.RoundNumber = RoundNumber;
        RoundInfo.PlayerChoice = ReadPlayerChoice();
        RoundInfo.ComputerChoice = ReadComputerChoice();
        RoundInfo.RoundWinner = WhoIsRoundWinner(RoundInfo);
        RoundInfo.RoundWinnerName = GetWinnerName(RoundInfo.RoundWinner);

        if (RoundInfo.RoundWinner == enWinner::Player)
            PlayerWonTime++;
        else if (RoundInfo.RoundWinner == enWinner::Computer)
            ComputerWonTime++;
        else
            DrawTime++;

        PrintRoundResult(RoundInfo);
    }
    return FillGameResults(HowManyRounds, PlayerWonTime, ComputerWonTime, DrawTime);
}

string Tab(int Num)
{
    string t = "";
    for (int i = 1; i <= Num; i++)
        t += "\t";

    return t;
}

void PrintGameOverScreen()
{
    cout << Tab(2) << "----------------------------------------------------------\n";
    cout << Tab(2) << "+++ Game Over +++\n";
    cout << Tab(2) << "----------------------------------------------------------\n";
}

void PrintGameResults(stGameResults GameResults)
{
    ChangeScreenColor(GameResults.FinalWinnerName);

    cout << Tab(2) << "----[Game Result]-------------------------------------\n";
    cout << Tab(2) << "Game Rounds: " << GameResults.GameRounds << endl;
    cout << Tab(2) << "Player Won Time: " << GameResults.PlayerWonTime << endl;
    cout << Tab(2) << "Computer Won Time: " << GameResults.ComputerWonTime << endl;
    cout << Tab(2) << "Draw Time: " << GameResults.DrawTime << endl;
    cout << Tab(2) << "Final Winner: " << GameResults.FinalWinnerName << endl;
    cout << Tab(2) << "-------------------------------------------------------\n";
}

void ClearScreen()
{
    system("cls");
    system("color 0F");
}

void StartGame()
{
    char PlayAgain = 'Y';

    do
    {
        ClearScreen();
        stGameResults GameResults = PlayRounds(ReadHowManyRounds());
        PrintGameOverScreen();
        PrintGameResults(GameResults);

        cout << "Do you want to play again? Y/N?\n";
        cin >> PlayAgain;
    } while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main()
{
    srand((unsigned)time(NULL));

    StartGame();

    return 0;
}