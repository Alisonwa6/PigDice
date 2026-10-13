#ifndef PIGDICE_PDGAME_H
#define PIGDICE_PDGAME_H
#include "TURN.h"

class PDGame {
    private:
        Turn m_myTurn;
        bool m_gameOver;
        int m_gameScore;
    public:
        PDGame();
        int getGameScore() const; // 1.
    private:
        static void displayRules();
        void playGame();
};


#endif //PIGDICE_PDGAME_H
