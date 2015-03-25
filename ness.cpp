#include "character.h"
#include "ness.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Ness::Ness(unsigned int ataque, string name, bool vivo, int HP, unsigned int magic):Character(ataque, name, vivo), HP(HP), magic(magic)
{

}

Ness::~Ness()
{

}

string Ness::toString()const{
    stringstream ss;
    ss<<Character::toString()<< "HP: "<<getHP(0)<<"Magic: "<<getMagic();
    return ss.str();
}

int Ness::getHP(int a)const{
    return HP - a;

}

unsigned int Ness::getMagic()const{
    return magic - 1;
}
