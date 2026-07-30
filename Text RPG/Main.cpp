#include <iostream>

#include "Player.h"
#include "Monster.h"
#include "Battle_System.h"

using namespace std;

int main()
{
    Player player;
    Monster monster;

    Battle battle(&player, &monster);

    battle.StartBattle();

    return 0;
}