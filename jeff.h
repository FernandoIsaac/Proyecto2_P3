#ifndef JEFF_H
#define JEFF_H


#include"character.h"
#include<string>
using std::string;

class Jeff : public Character
{
public:
    int HP;
    unsigned int magic;
    unsigned int IQ;

public:
    Jeff(unsigned int, string, bool, int, unsigned int, unsigned int);
    Jeff();
    ~Jeff();
    virtual string toString()const;
    virtual int getHP(int)const;
    virtual unsigned int getMagic()const;
    unsigned int getIQ()const;
};
#endif // JEFF_H
