#ifndef ALMACENENEMIGOS_H
#define ALMACENENEMIGOS_H
#include "character.h"
#include "enemy.h"
#include <vector>

using std::vector;

class almacenenemigos
{
    vector<Enemy*> enemigos;
public:
   almacenenemigos(vector<Enemy*>);

    vector<Enemy*> getEnemyList();
    void setEnemyList(vector<Enemy*>);
    string toString()const;
    ~almacenenemigos();
};

#endif // ALMACENENEMIGOS_H
