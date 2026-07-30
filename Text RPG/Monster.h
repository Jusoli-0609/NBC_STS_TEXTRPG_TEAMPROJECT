#pragma once

class Monster
{
private:
    int hp;
    int maxHp;
    int attack;
    int defense;

public:
    Monster();

    int GetHP() const;
    int GetMaxHP() const;
    int GetAttack() const;
    int GetDefense() const;

    void TakeDamage(int damage);

    bool IsDead() const;
};