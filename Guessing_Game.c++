#include <iostream>
#include <cstdlib> // Library for random number functions
#include <ctime>   // Library to get the current time
using namespace std;

int main() {
    srand(time(0)); // Initialize the random number generator with the current time
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess; // Variable to store the user's guess
    int attempts = 0; // Counter for the number of attempts

    // Game introduction
    cout << "Try to guess the secret number (between 1 and 100): " << endl;

    // Game loop (repeats until the user guesses the number)
    do {
        cout << "Enter your guess: ";
        cin >> guess; // Read the user's guess
        attempts++; // Increment the attempts counter

        // Check if the guess is too low or too high
        if (guess < secretNumber) {
            cout << "Too low!" << endl;
        } else if (guess > secretNumber) {
            cout << "Too high!" << endl;
        } else {
            // Victory message if the user guesses correctly
            cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber); // Continue while the guess is not equal to the secret number

    return 0;
}
