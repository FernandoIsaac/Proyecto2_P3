#ifndef NESS_H
#define NESS_H

#include"character.h"
#include<string>
using std::string;

class Ness : public Character
{
public:
    int HP;
    unsigned int magic;

public:
    Ness(unsigned int, string, bool, int, unsigned int);
    Ness();
    ~Ness();
    virtual string toString()const;
    virtual int getHP(int)const;
    virtual unsigned int getMagic()const;
};

#endif // NESS_H
