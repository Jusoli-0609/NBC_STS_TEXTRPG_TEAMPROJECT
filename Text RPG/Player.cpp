#include "Player.h"
#include "Monster.h"

Player::Player()
{
    maxHp = 100;
    hp = maxHp;
    attack = 20;
    defense = 5;
}

int Player::GetHP() const
{
    return hp;
}

int Player::GetMaxHP() const
{
    return maxHp;
}

int Player::GetAttack() const
{
    return attack;
}

int Player::GetDefense() const
{
    return defense;
}

void Player::TakeDamage(int damage)
{
    damage -= defense;

    if (damage < 1)
        damage = 1;

    hp -= damage;

    if (hp < 0)
        hp = 0;
}

void Player::Attack(Monster* monster)
{
    monster->TakeDamage(attack);
}

bool Player::IsDead() const
{
    return hp <= 0;
}