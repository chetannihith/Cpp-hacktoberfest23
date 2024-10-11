#include <iostream>
#include <cstdlib>   // defines a set of functions as: random number generation.
#include <ctime>     // returns the string representing the localtime.

using namespace std;

int main(){
    int num;         // variable to store random number.
    int guess;       // variable to store guessed number.
    bool isGuessed = false;  // boolean variable initialized to 'false' to control the loop.
    char again;  // variable to ask user to play the game again.
    int count;   // variable to count the number of tries

    srand(time(0));
    
    cout << "Do you want to play the Guess Game? ('Y' for Yes and 'N' for No) \n\n"; // gives user a choice to play or not.
    cin >> again;

    while(again == 'y' || again == 'Y'){  // logical operator 'OR' to run, either if only one condition is satisfied.
        num = rand() % 100;  // generates random number between 0-100
        count = 0; // reset count for each new game

        cout << endl;

        while(!isGuessed){
            cout << "Enter an integer in the range of 0-100: \n";   // the '\n' sets the pointer to a new line.
            cin >> guess;
            count++;  // increase count for each guess

            if(guess == num){
                cout << "You entered the correct number.\n";
                cout << "Winner\n\n";
                cout << "You took " << count << " tries to guess the number.\n\n";
                break;  // exit the inner loop when the correct guess is made
            }
            else if(guess < num){
                cout << "Your guess is lower than the number. \n";
                cout << "Guess again! \n\n";
            }
            else if(guess > num){
                cout << "Your guess is higher than the number. \n";
                cout << "Guess again! \n\n";
            }
        }

        cout<< "Do you want to play the Guess Game again? ('Y' for Yes and 'N' for No) \n\n";
        cin >> again;
        isGuessed = false;  // reset isGuessed for the next game
    }

    cout << endl;
    cout << "Sad to see you go :( \n";
    cout << "Goodbye!"; // leaves a farewell message when user prompts 'No' to stop playing.

    return 0;
}

