#pragma once

class Player;
class Monster;

class Battle
{
private:
    Player* player;
    Monster* monster;

    bool playerTurn;

public:
    Battle(Player* player, Monster* monster);

    void StartBattle();

private:
    void ShowStatus();
    void PlayerTurn();
    void MonsterTurn();
    bool CheckBattleEnd();
};