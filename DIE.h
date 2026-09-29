#ifndef PIGDICE_DIE_H
#define PIGDICE_DIE_H

class Die {
private:
    int m_dieValue;
    int m_numOfSides;
public:
    Die();
    void set_numOfSides(int numOfSides);
    int get_numOfSides();
    void setValue();
    int getValue();
};

#endif //PIGDICE_DIE_H
