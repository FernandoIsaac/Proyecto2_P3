#ifndef PAULA_H
#define PAULA_H
#include"character.h"
#include<string>
using std::string;

class Paula : public Character
{
public:
    int HP;
    unsigned int magic;
    unsigned int lucky;

public:
    Paula(unsigned int, string, bool, int, unsigned int, unsigned int);
    Paula();
    ~Paula();
    virtual string toString()const;
    virtual int getHP(int)const;
    virtual unsigned int getMagic()const;
    unsigned int getLucky()const;
};
#endif // PAULA_H
