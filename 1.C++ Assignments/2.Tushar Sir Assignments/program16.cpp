#include <iostream>
int main() {
    int totalMatchsticks = 21;
    int playerPick, computerPick;
    std::cout << "Welcome to the Matchstick Game!" << std::endl;
    while (totalMatchsticks > 0) {
        // Player's turn
        std::cout << "Enter your pick (1-4 matchsticks): ";
        std::cin >> playerPick;

        if (playerPick < 1 || playerPick > 4 || playerPick > totalMatchsticks) {
            std::cout << "Invalid input. Please pick 1 to 4 matchsticks within the available range." << std::endl;
            continue;
        }

        totalMatchsticks -= playerPick;
        std::cout << "Remaining matchsticks: " << totalMatchsticks << std::endl;

        // Check if the player has picked the last matchstick
        if (totalMatchsticks == 0) {
            std::cout << "You lose! .You picked the last matchstick. " << std::endl;
            break;
        }

        // Computer's turn
        computerPick = 5 - playerPick; // Computer follows a winning strategy
        std::cout << "Computer picks " << computerPick << " matchstick(s)." << std::endl;
        totalMatchsticks -= computerPick;
        std::cout << "Remaining matchsticks: " << totalMatchsticks << std::endl;

        // Check if the computer has picked the last matchstick
        if (totalMatchsticks == 0) {
            std::cout << "Computer picked the last matchstick. You win!" << std::endl;
            break;
        }
    }

    return 0;
}
