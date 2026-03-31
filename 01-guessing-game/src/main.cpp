#include <iostream>

int main() {
    
    std::cout << "=== Guessing Game Application ===" << std::endl;

    int secretNumber = rand() % 100 + 1; // This is the number the user has to guess
    int userGuess; // 0-100

    std::cout << "Enter your guesses (0-100): ";

    while (1)
    {
        std::cin >> userGuess;

        if(userGuess < 0 || userGuess > 100) {
            std::cout << "Invalid input! Please enter a number between 0 and 100: ";
        }
        else if(userGuess < secretNumber) {
            std::cout << "Too low! Try again: ";
        } else if (userGuess > secretNumber) {
            std::cout << "Too high! Try again: ";
        } else {
            std::cout << "Congratulations! You've guessed the number!" << std::endl;
            break; // Exit the loop when the user guesses correctly
        }

    };


    return 0;
}
