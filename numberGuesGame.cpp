#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;

int generateRandomNumber(int min, int max) {
    srand(static_cast<unsigned int>(time(nullptr)));
    return rand() % (max - min + 1) + min;
}

int main() {
    
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 100;
    int randomNumber = generateRandomNumber(MIN_NUMBER, MAX_NUMBER);
    int userGuess = 0;
    int numberOfGuesses = 0;
    cout << "Welcome to the Guess the Number game!" <<endl;
    cout << "I have selected a random number between " << MIN_NUMBER << " and " << MAX_NUMBER << "." <<endl;
    cout << "Can you guess what it is?" <<endl;

    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        numberOfGuesses++;
        if (userGuess < randomNumber) {
            cout << "Your guess is too low.! Try again." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Your guess is too high.! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number!" << endl;
            cout << "It took you " << numberOfGuesses << " guesses to find the number." << endl;
        }
    }

    cout << "Thank you for playing the Guess the Number game!" << endl;
    return 0;
}