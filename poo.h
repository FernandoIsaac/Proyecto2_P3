#ifndef POO_H
#define POO_H

#include"character.h"
#include<string>
using std::string;

class Poo : public Character
{
public:
    int HP;
    unsigned int magic;
    double starstorm;
public:
    Poo(unsigned int, string, bool, int, unsigned int, double);
    Poo();
    ~Poo();
    virtual string toString()const;
    virtual int getHP(int)const;
    virtual unsigned int getMagic()const;
    double getStarStorm()const;
};
#endif // POO_H
