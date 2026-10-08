#ifndef PIGDICE_DIE_H
#define PIGDICE_DIE_H

class Die {
private:
    int m_dieValue;
public:
    Die();
    void rollDie();
    int getDieValue();
};

#endif //PIGDICE_DIE_H
