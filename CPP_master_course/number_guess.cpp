#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{

    srand(time(nullptr));

    bool guessedNumber = false;
    int guessCount = 0;
    int ourGuess;
    int ComputerNumber = rand() % 100 + 1;

    while (!guessedNumber)
    {
        cout << "Enter your guess " << endl;
        cin >> ourGuess;

        if (ourGuess > 100 || ourGuess < 1)
        {
            cout << "That was wrong guess. You mucst pick a number between 1 and 100 inclusive!" << endl;
            guessCount++;
            continue;

        }
        if(ourGuess == ComputerNumber)
        {
            cout << "Congratulations" << endl;

        }
        else if(ourGuess > ComputerNumber)
        {
            cout <<  "Number is too High" << endl;
        }
        else{
            cout << "Number is too low" << endl;
        }
        guessCount++;

    }

    return 0;
}