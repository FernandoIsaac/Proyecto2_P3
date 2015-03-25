#include "character.h"
#include "enemy.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Enemy::Enemy(unsigned int ataque, string name, bool vivo, int HP, unsigned int magic):Character(ataque, name, vivo), HP(HP), magic(magic)
{

}

Enemy::~Enemy()
{

}

string Enemy::toString()const{
    stringstream ss;
    ss<<Character::toString()<< "HP: "<<getHP(0)<<"Magic: "<<getMagic();
    return ss.str();
}

int Enemy::getHP(int a)const{
    return HP - a;

}

unsigned int Enemy::getMagic()const{
    return magic - 1;
}



