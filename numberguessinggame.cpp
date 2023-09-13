#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
 
int main()
{
 
    cout << "GUESSING NUMBER GAME WAITING FOR YOU"<< endl;
    cout << " guess a number between 1 and 100. " << endl;
 
    while (true) {
        cout << "\nEnter the difficulty level:"<<endl;
        cout << "1 represent easy!"<<endl;
        cout << "2 represent medium!"<<endl;
        cout << "3 represent difficult!"<<endl;
        cout << "0 represent the end game!\n" << endl;
 
        // difficulty level choices
        int difficultylevel;
        cout << "Enter the number: ";
        cin >> difficultylevel;
 
        
        srand(time(0));
        int guessednumber = 1 + (rand() % 100);
        int playerchoice;
 
        // Difficulty Level:Easy
        if (difficultylevel == 1) {
            cout << "\nYou have 10 choices for finding the "
                    "secret number between 1 and 100.";
            int leftchoices = 10;
            for (int i = 1; i <= 10; i++) {
 
                // guessing the secret number
                cout << "\n\nEnter the number: ";
                cin >> playerchoice;
 
                // checking if the playerchoice matches
                if (playerchoice == guessednumber) {
                    cout << "you played well! You won, "
                         << playerchoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing this game...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerchoice
                         << " is not the right number\n";
                    if (playerchoice > guessednumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                " chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                " chosen"
                             << endl;
                    }
                    leftchoices--;
                    cout << leftchoices << " choices left. "
                         << endl;
                    if (leftchoices == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << guessednumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
 
        // Difficulty level : Medium
        else if (difficultylevel == 2) {
            cout << "\nYou have 7 choices for finding the "
                    "secret number between 1 and 100.";
            int leftchoices = 7;
            for (int i = 1; i <= 7; i++) {
 
                // prompt player to guess the number
                cout << "\n\nEnter the number: ";
                cin >> playerchoice;
 
                // checking that playerchoice matches with secret number
                if (playerchoice == guessednumber) {
                    cout << "Well played! You won, "
                         << playerchoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerchoice
                         << " is not the right number\n";
                    if (playerchoice > guessednumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    leftchoices--;
                    cout << leftchoices << " choices left. "
                         << endl;
                    if (leftchoices == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << guessednumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
        // Difficulty level : hard
        else if (difficultylevel == 3) {
            cout << "\nYou have 5 choices for finding the "
                    "secret number between 1 and 100.";
            int leftchoices = 5;
            for (int i = 1; i <= 5; i++) {
 
                
                cout << "\n\nEnter the number: ";
                cin >> playerchoice;
 
                // checking the playerchoice matches with secretnumber or not
                if (playerchoice == guessednumber) {
                    cout << "Well played! You won, "
                         << playerchoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerchoice
                         << " is not the right number\n";
                    if (playerchoice > guessednumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    leftchoices--;
                    cout << leftchoices << " choices left. "
                         << endl;
                    if (leftchoices == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << guessednumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
        // To end the game
        else if (difficultylevel == 0) {
            exit(0);
        }
        else {
            cout << "Wrong choice, Enter valid choice to "
                    "play the game! (0,1,2,3)"
                 << endl;
        }
    }
    return 0;
}