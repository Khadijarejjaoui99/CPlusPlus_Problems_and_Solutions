#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enStonePaperScissors
{
    Stone = 1,
    Paper = 2,
    Scissors = 3
};

struct stGameInfo
{
    int NumberOfRounds = 0, PlayerWonTime = 0, ComputerWonTime = 0, DawnTime = 0;
    string FinalWinner;
};

struct stRoundInfo
{
    enStonePaperScissors PlayerChoice, ComputerChoice;
    string RoundWinner;
};

int ReadNumberInRange(int From, int To, string Msg)
{
    int Number;

    do
    {
        cout << Msg << endl;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}

int GetRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

enStonePaperScissors ReadPlayerChoice()
{
    int Choice;

    cout << "Your Choice: [1]: Stone, [2]: Paper, [3]: Scissors? ";
    cin >> Choice;
    return (enStonePaperScissors)Choice;
}
enStonePaperScissors ComputerChoice()
{
    int Choice = GetRandomNumber(1, 3);
    return (enStonePaperScissors)Choice;
}

string GetWinner(stGameInfo &GameInfo, stRoundInfo RoundInfo)
{
    switch (RoundInfo.PlayerChoice)
    {
    case enStonePaperScissors::Paper:
        if (RoundInfo.ComputerChoice == enStonePaperScissors::Paper)
        {
            GameInfo.DawnTime++;
            return "No Winner";
        }
        else if (RoundInfo.ComputerChoice == enStonePaperScissors::Scissors)
        {
            GameInfo.ComputerWonTime++;
            return "Computer";
        }
        else if (RoundInfo.ComputerChoice == enStonePaperScissors::Stone)
        {
            GameInfo.PlayerWonTime++;
            return "Player";
        }
        break;
    case enStonePaperScissors::Scissors:
        if (RoundInfo.ComputerChoice == enStonePaperScissors::Paper)
        {
            GameInfo.PlayerWonTime++;
            return "Player";
        }
        else if (RoundInfo.ComputerChoice == enStonePaperScissors::Scissors)
        {
            GameInfo.DawnTime++;
            return "No Winner";
        }
        else if (RoundInfo.ComputerChoice == enStonePaperScissors::Stone)
        {
            GameInfo.ComputerWonTime++;
            return "Computer";
        }
        break;
    case enStonePaperScissors::Stone:
        if (RoundInfo.ComputerChoice == enStonePaperScissors::Paper)
        {
            GameInfo.ComputerWonTime++;
            return "Computer";
        }
        else if (RoundInfo.ComputerChoice == enStonePaperScissors::Scissors)
        {
            GameInfo.PlayerWonTime++;
            return "Player";
        }
        else if (RoundInfo.ComputerChoice == enStonePaperScissors::Stone)
        {
            GameInfo.DawnTime++;
            return "No Winner";
        }
        break;
    default:
        break;
    }
}

string GetName(enStonePaperScissors StonePaperScissors)
{
    if (StonePaperScissors == enStonePaperScissors::Stone)
        return "Stone";
    else if (StonePaperScissors == enStonePaperScissors::Paper)
        return "Paper";
    else
        return "Scissors";
}

void GetScreenColor(string Winner)
{
    if (Winner == "Player")
    {
        system("color 2F");
    }
    else if (Winner == "Computer")
    {
        system("color 4F");
    }
    else if (Winner == "No Winner")
    {
        system("color 6F");
    }
}

void PrintRoundResult(stRoundInfo RoundInfo, int i)
{
    GetScreenColor(RoundInfo.RoundWinner);
    cout << "\n-------------------- Round[" << i << "]---------------------------------\n";
    cout << "Player Choice: " << GetName(RoundInfo.PlayerChoice) << endl;
    cout << "Computer Choice: " << GetName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner: " << RoundInfo.RoundWinner << endl;
    cout << "-----------------------------------------------------------------------\n";
}
string GetFinalWinner(stGameInfo GameInfo)
{
    if (GameInfo.PlayerWonTime > GameInfo.ComputerWonTime)
        return "Player";
    else if (GameInfo.PlayerWonTime < GameInfo.ComputerWonTime)
        return "Computer";
    else
        return "No Winner";
}
void PlayRounds(stGameInfo &GameInfo)
{
    stRoundInfo RoundInfo;
    for (int i = 1; i <= GameInfo.NumberOfRounds; i++)
    {
        cout << "Round [" << i << "] begins:\n";
        RoundInfo.PlayerChoice = ReadPlayerChoice();
        RoundInfo.ComputerChoice = ComputerChoice();
        RoundInfo.RoundWinner = GetWinner(GameInfo, RoundInfo);

        PrintRoundResult(RoundInfo, i);
    }
    GameInfo.FinalWinner = GetFinalWinner(GameInfo);
}

void PrintFinalResult(stGameInfo GameInfo)
{
    GetScreenColor(GameInfo.FinalWinner);
    cout << "\n--------------------------------------------------\n";
    cout << "                       +++ Game Over +++\n";
    cout << "----------------------------------------------------\n";
    cout << "\n--------------------[Game Result]-----------------\n";
    cout << "Game Round: " << GameInfo.NumberOfRounds << endl;
    cout << "Player Won Time: " << GameInfo.PlayerWonTime << endl;
    cout << "Computer Won Time: " << GameInfo.ComputerWonTime << endl;
    cout << "Draw Time: " << GameInfo.DawnTime << endl;
    cout << "Final Winner: " << GameInfo.FinalWinner << endl;
}

void StartGame()
{

    stGameInfo GameInfo;
    char PlayMore = 'Y';

    do
    {
        system("cls");
        system("color 0F");

        GameInfo.NumberOfRounds = ReadNumberInRange(1, 10, "How many Rounds 1 to 10?");

        PlayRounds(GameInfo);
        PrintFinalResult(GameInfo);
        cout << "Do you want to play again Y/N?";
        cin >> PlayMore;

    } while (PlayMore == 'Y' || PlayMore == 'y');
}

int main()
{
    srand((unsigned)time(NULL));

    StartGame();
    return 0;
}