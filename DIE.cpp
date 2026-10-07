#include <random>
#include "DIE.h"

Die::Die() { // default constructor
    m_dieValue = 0; // can replace with setValue()
}
void Die::rollDie() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 6);
    m_dieValue = dis(gen);
}
int Die::getDieValue() const {
    // rules for accessing the data
    return m_dieValue;
}