#include "character.h"
#include "jeff.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Jeff::Jeff(unsigned int ataque, string name, bool vivo, int HP, unsigned int magic, unsigned int IQ):Character(ataque, name, vivo), HP(HP), magic(magic), IQ(IQ)
{

}

Jeff::~Jeff()
{

}

string Jeff::toString()const{
    stringstream ss;
    ss<<Character::toString()<< "HP: "<<getHP(0)<<"Magic: "<<getMagic();
    return ss.str();
}

int Jeff::getHP(int a)const{
    return HP - a;

}

unsigned int Jeff::getMagic()const{
    return magic - 1;
}

unsigned int Jeff::getIQ()const{
    return IQ+1;
}
