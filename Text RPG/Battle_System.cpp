#include "Battle_System.h"
#include "Player.h"
#include "Monster.h"

#include <iostream>

using namespace std;

Battle::Battle(Player* player, Monster* monster)
{
    this->player = player;
    this->monster = monster;
    playerTurn = true;
}

void Battle::StartBattle()
{
    cout << "===== 전투 시작 =====" << endl;

    while (true)
    {
        ShowStatus();

        if (playerTurn)
        {
            PlayerTurn();
        }
        else
        {
            MonsterTurn();
        }

        if (CheckBattleEnd())
            break;

        playerTurn = !playerTurn;

        cout << endl;
    }

    cout << "===== 전투 종료 =====" << endl;
}

void Battle::ShowStatus()
{
    cout << "------------------------" << endl;
    cout << "플레이어 HP : "
        << player->GetHP()
        << "/"
        << player->GetMaxHP()
        << endl;

    cout << "몬스터 HP : "
        << monster->GetHP()
        << "/"
        << monster->GetMaxHP()
        << endl;

    cout << "------------------------" << endl;
}

void Battle::PlayerTurn()
{
    cout << "플레이어의 턴!" << endl;

    player->Attack(monster);

    cout << "플레이어가 공격했습니다." << endl;
}

void Battle::MonsterTurn()
{
    cout << "몬스터의 턴!" << endl;

    player->TakeDamage(monster->GetAttack());

    cout << "몬스터가 공격했습니다." << endl;
}

bool Battle::CheckBattleEnd()
{
    if (monster->IsDead())
    {
        cout << "몬스터를 처치했습니다!" << endl;
        return true;
    }

    if (player->IsDead())
    {
        cout << "플레이어가 쓰러졌습니다..." << endl;
        return true;
    }

    return false;
}