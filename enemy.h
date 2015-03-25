#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"
#include<string>
using std::string;

class Enemy : public Character
{
public:

    int HP;
    unsigned int magic;

public:
    Enemy(unsigned int, string, bool, int, unsigned int);
    Enemy();
    ~Enemy();
    virtual string toString()const;
    virtual int getHP(int)const;
    virtual unsigned int getMagic()const;
};

#endif // ENEMY_H
