//
// Created by awalt on 10/6/2026.
//

#include "TURN.h"

#include <iostream>

Turn::Turn() {
    m_turnCount = 1;
    m_scoreThisTurn = 0;
    m_turnOver = false;
    m_choice = 't';
}

void Turn::takeTurn() {
    m_turnCount ++;

    while (!m_turnOver) {
        std::cout << "roll or hold? (r/h):  ";
        std::cin >> m_choice;
        if (m_choice == 'r') {
            roll();
        }
        else if (m_choice == 'h') {
            m_turnOver = true;
        }
        else {
            std::cout << "Invalid choice!";
        }
    }
    std::cout << "Score Banked This Turn: " << m_scoreThisTurn << std::endl;
}

int Turn::getScoreThisTurn() const{
    return m_scoreThisTurn;
}

void Turn::resetTurnOver() {
    m_turnOver = false;
}

int Turn::getTurnCount() const {
    return m_turnCount;
}

void Turn::resetGameOver() {
    if (m_scoreThisTurn <= 20) {
        m_scoreThisTurn = 0;
    }
}

void Turn::roll() {
    m_myDie.rollDie();
    std::cout << "Die: " << m_myDie.getDieValue();

    if (m_myDie.getDieValue() == 1) {
        std::cout << "\nTurn over. No score." << std::endl;
        m_scoreThisTurn = 0;
        m_turnOver = true;
    }
    else {
        m_scoreThisTurn += m_myDie.getDieValue();
        std::cout << " - Running score this turn: " << m_scoreThisTurn << std::endl;
    }
}