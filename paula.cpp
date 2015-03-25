#include "character.h"
#include "paula.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Paula::Paula(unsigned int ataque, string name, bool vivo, int HP, unsigned int magic, unsigned int lucky):Character(ataque, name, vivo), HP(HP), magic(magic), lucky(lucky)
{

}

Paula::~Paula()
{

}

string Paula::toString()const{
    stringstream ss;
    ss<<Character::toString()<< "HP: "<<getHP(0)<<"Magic: "<<getMagic();
    return ss.str();
}

int Paula::getHP(int a)const{
    return HP - a;

}

unsigned int Paula::getMagic()const{
    return magic - 1;
}

unsigned int Paula::getLucky()const{
    return lucky+1;
}
