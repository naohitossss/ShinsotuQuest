#pragma once 

#include "Player.h"
#include "Enemy.h"

class BattleProfessor
{
	public:
		BattleProfessor(Player& player,Enemy &enemy) :_player(&player),_target(&enemy) {};
		~BattleProfessor() = default;
		void PlayerAttack();
		void EnemyAttack();
private:
	Player *_player;
	Enemy *_target;

};