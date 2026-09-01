#include <iostream>

// Build your solution starting from this code.

struct GameState {
    char choice;
    int turn_count = 0;
    int game_score = 0;
    int score_this_turn = 0;
    bool game_over = false;
    bool turn_over = false;
};

/*void addscore(GameState &gs) {
    gs.game_score += 10;
}*/

void startGame() {
    std::cout << "Let's Play PIG Dice!" << std::endl << std::endl;
    std::cout << "* See how many turns it takes you to get to 20 points." << std::endl;
    std::cout << "* Turn ends when you hold or roll a 1." << std::endl;
    std::cout << "* If you roll a 1, you lose all points for the turn." << std::endl;
    std::cout << "* If you hold, you bank all points for the turn to the game score." << std::endl;
}



int main() {
    startGame();
    //GameState my_game; // instantiate a GameState object
    //addscore(my_game);
    //std::cout << "Game Score is: " << my_game.game_score << std::endl;
    //display_rules(); // call the display_rules function
    //play_game(my_game); // call the play_game function and pass the GameState object
    return 0;
}
