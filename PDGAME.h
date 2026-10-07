#ifndef PIGDICE_PDGAME_H
#define PIGDICE_PDGAME_H
#include "TURN.h"

class PDGAME {
    private:
        Turn m_myTurn;
        bool m_gameOver;
        int m_gameScore;
    public:
        PDGAME();
    private:
        void displayRules();
        void playGame();
};


#endif //PIGDICE_PDGAME_H
