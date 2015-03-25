#ifndef CHARACTER_H
#define CHARACTER_H

#include<string>
#include<iostream>
#include<qpaintdevice.h>
using std::string;
using std::istream;
using std::ostream;

class Character
{
public:
    unsigned int ataque;
    string name;
    bool vivo;

public:
    Character(unsigned int, string, bool);
    Character();
    ~Character();
    virtual string toString()const;
    virtual int getHP(int)const = 0;
    virtual unsigned int getMagic()const=0;
    unsigned int getAtaque()const;
    string getName()const;
    bool isVivo()const;
};

#endif // CHARACTER_H
