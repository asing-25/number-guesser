#include "random.h"
#include <iostream>

void playGuessingGame()
{
    int random{ getRand(1, 100) };
    std::cout << "I'm thinking of a number between 1 and 100. You have 7 tries.\n";

    for (int i{ 1 }; i <= 7; ++i)
    {
        int input{};
        std::cout << "Guess #" << i << ": ";
        std::cin >> input;

        if (input == random)
        {
            std::cout << "Correct! You win!\n";
            return; // Exit the function (win)
        }
        else if (input > random)
            std::cout << "Too High!\n";
        else
            std::cout << "Too Low!\n";
    }

    std::cout << "You Lose! The number was " << random << '\n';
}
