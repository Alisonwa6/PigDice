#ifndef PIGDICE_TURN_H
#define PIGDICE_TURN_H
#include "DIE.h"


class TURN {
    private:
        int m_turnCount;
        int m_scoreThisTurn;
        bool m_turnOver;
        char m_choice;
        Die m_myDie;
    public:
        Turn();
        //Turn(&);
        void takeTurn();
        int getScoreThisTurn();
        void resetTurnOver();
        int getTurnCount();
        void resetGameOver();
};


#endif //PIGDICE_TURN_H
