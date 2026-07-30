#pragma once

class Player
{
private:
    int hp;
    int maxHp;
    int attack;
    int defense;

public:
    Player();

    int GetHP() const;
    int GetMaxHP() const;
    int GetAttack() const;
    int GetDefense() const;

    void TakeDamage(int damage);
    void Attack(class Monster* monster);

    bool IsDead() const;
};