// MyFirstCPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    int NumberToGuess = rand() % 1000;
    string UserGuess;
    int GuessCount = 1;
    
    bool ContinuePlaying = true;

    while(ContinuePlaying) {
        cout << "Guess a number between 0  and 999" << endl;
        cin >> UserGuess;

        int UserNumber = stoi(UserGuess);

        if (UserNumber == NumberToGuess) {
            cout << " You Guessed Correctly! Congratulations you won the game!" << endl;
            cout << " It took you " << GuessCount << " guesses to get it right!" << endl;
            cout << "Do You want to play again?(y/n)" << endl;

            string playAgain;
            cin >> playAgain;

            if (playAgain == "y") {
                NumberToGuess = rand() % 1000;
                GuessCount = 1;


            }
            else if (playAgain == "n") {
                cout << "Thank you for playing" << endl;
                ContinuePlaying = false;

            }
        }
        else if (UserNumber > NumberToGuess) {
            cout << "My Number is lower, Please Try Again." << endl;
            cout << "Number of Guesses: " << GuessCount++ << endl;
        }
        else if (UserNumber < NumberToGuess) {
            cout << "My Number is Higher, Please Try Again." << endl;
            cout << "Number of Guesses: " << GuessCount++ << endl;

        }
    }
    return 0;
   
}
/*
this is a comment.
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
