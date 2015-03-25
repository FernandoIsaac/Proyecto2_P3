#include "character.h"
#include "poo.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Poo::Poo(unsigned int ataque, string name, bool vivo, int HP, unsigned int magic, double starstorm):Character(ataque, name, vivo), HP(HP), magic(magic), starstorm(starstorm)
{

}

Poo::~Poo()
{

}

string Poo::toString()const{
    stringstream ss;
    ss<<Character::toString()<< "HP: "<<getHP(0)<<"Magic: "<<getMagic();
    return ss.str();
}

int Poo::getHP(int a)const{
    return HP - a;

}

unsigned int Poo::getMagic()const{
    return magic - 1;
}

double Poo::getStarStorm()const{
    return getMagic() * getAtaque();
}
