#include "game.h"
#include <iostream>

int main()
{
    while (true) // External loop for playing again
    {
        playGuessingGame();

        char answer{};
        std::cout << "Would you like to play again? (y/n): ";
        std::cin >> answer;

        if (answer != 'y')
            break;
    }

    std::cout << "Thank you for playing!\n";
    return 0;
}
