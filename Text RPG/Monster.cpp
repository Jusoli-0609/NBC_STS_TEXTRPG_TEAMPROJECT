#include "Monster.h"

Monster::Monster()
{
    maxHp = 80;
    hp = maxHp;
    attack = 15;
    defense = 3;
}

int Monster::GetHP() const
{
    return hp;
}

int Monster::GetMaxHP() const
{
    return maxHp;
}

int Monster::GetAttack() const
{
    return attack;
}

int Monster::GetDefense() const
{
    return defense;
}

void Monster::TakeDamage(int damage)
{
    damage -= defense;

    if (damage < 1)
        damage = 1;

    hp -= damage;

    if (hp < 0)
        hp = 0;
}

bool Monster::IsDead() const
{
    return hp <= 0;
}