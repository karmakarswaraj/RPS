#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL)); // Seed the random number generator

    cout << "\t\t\t\t\t==================================" << endl;
    cout << "\t\t\t\t\tROCK PAPER SCISSORS LIZARD SPOCK!" << endl;
    cout << "\t\t\t\t\t==================================" << endl;
    cout << "Enter your option" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissors" << endl;

    int user;
    cin >> user;

    string choices[] = { "Rock", "Paper", "Scissors" };
    string userChoice = choices[user - 1];

    int cpu = rand() % 3 + 1;
    string cpuChoice = choices[cpu - 1];

    cout << "-You choose " << userChoice << "-" << endl;
    cout << "-CPU chooses " << cpuChoice << "-" << endl;

    if (user == cpu)
    {
        cout << "Ladies and Gentlemen!" << endl;
        cout << "We have a tie!" << endl;
    }
    else if ((user == 1 && cpu == 3) || (user == 2 && cpu == 1) || (user == 3 && cpu == 2))
    {
        cout << "You Win!" << endl;
        cout << userChoice << " beats " << cpuChoice << "!" << endl;
    }
    else
    {
        cout << "You Lose!" << endl;
        cout << cpuChoice << " beats " << userChoice << "!" << endl;
    }

    return 0;
}
