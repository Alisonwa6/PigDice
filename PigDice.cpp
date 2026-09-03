#include <iostream>
#include <cstdlib>
#include <ctime>

// Build your solution starting from this code.

struct GameState {
    char choice;
    int turn_count = 0;
    int game_score = 0;
    int score_this_turn = 0;
    bool game_over = false;
    bool turn_over = false;
};

void display_rules() {
    std::cout << "Let's Play PIG Dice!" << std::endl << std::endl;
    std::cout << "* See how many turns it takes you to get to 20 points." << std::endl;
    std::cout << "* Turn ends when you hold or roll a 1." << std::endl;
    std::cout << "* If you roll a 1, you lose all points for the turn." << std::endl;
    std::cout << "* If you hold, you bank all points for the turn to the game score." << std::endl;
}

void play_game(GameState &g);
void take_turn(GameState &g);
void roll(GameState &g);
void hold(GameState &g);

int main() {
    GameState my_game; // instantiate a GameState object
    display_rules(); // call the display_rules function
    play_game(my_game); // call the play_game function and pass the GameState object
    return 0;
}

void play_game(GameState &g) {
    while (!g.game_over) {
        take_turn(g);
        g.game_score += g.score_this_turn;
        if (g.game_score >= 20) {
            g.game_over = true;
        }
        else {
            g.turn_over = false;
            g.score_this_turn = 0;
        }
    }
    std::cout << "\nYou finished with a final score of " << g.game_score << " in " << g.turn_count << " turns!" << std::endl;
    std::cout << "Thanks for playing PIG Dice!" << std::endl;
}

void take_turn(GameState &g) {
    g.turn_count ++;
    std::cout << "\nTURN " << g.turn_count << " - Game Score: " << g.game_score << std::endl;

    while (!g.turn_over) {
        std::cout << "roll or hold? (r/h):  ";
        std::cin >> g.choice;
        if (g.choice == 'r') {
            roll(g);
        }
        else if (g.choice == 'h') {
            hold(g);
        }
        else {
                std::cout << "Invalid choice!";
        }
    }
    std::cout << "Score Banked This Turn: " << g.score_this_turn << std::endl;
}

void roll(GameState &g) {
    srand(time(NULL));
    int die = rand() % 6 + 1;
    std::cout << "Die: " << die;

    if (die == 1) {
        std::cout << "\nTurn over. No score." << std::endl;
        g.score_this_turn = 0;
        g.turn_over = true;
    }
    else {
        g.score_this_turn += die;
        std::cout << " - Running score this turn: " << g.score_this_turn << std::endl;
    }
}

void hold(GameState &g) {
    g.turn_over = true;
}