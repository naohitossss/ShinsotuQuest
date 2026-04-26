#include "BattleProfessor.h"

void BattleProfessor::PlayerAttack()
{
    int damage = _player->GetPower();
    _target->DecreaseHp(damage);

    int targetHp = _target->GetHp();
    if (targetHp <= 0) {
        int exp = _target->GetExp();
        _player->AddExp(exp);
    }
}

void BattleProfessor::EnemyAttack()
{
    int damage = _target->GetPower();
    _player->DecreaseHp(damage);
}