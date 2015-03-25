#include "character.h"
#include "enemy.h"
#include "almacenenemigos.h"
#include <vector>
#include <sstream>

using std::stringstream;
using std::vector;

almacenenemigos::almacenenemigos(vector<Enemy*> enemigos): enemigos(enemigos)
{

}

string almacenenemigos::toString()const{
    //stringstream ss;
    //return ss;
}

vector<Enemy*> almacenenemigos::getEnemyList(){
    return enemigos;
}

void almacenenemigos::setEnemyList(vector<Enemy*> enemigos){
    this->enemigos = enemigos;
}

almacenenemigos::~almacenenemigos()
{

}


